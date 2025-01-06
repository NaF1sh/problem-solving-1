#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> sushi(n);
    for (int i = 0; i < n; i++)
    {
        cin >> sushi[i];
    }

    int maxLength = 0;
    int left = 0;
    int type1 = sushi[0], type2 = -1; // Initialize with the first type and set the second as -1
    int countType1 = 0, countType2 = 0;

    for (int right = 0; right < n; right++)
    {
        if (sushi[right] == type1)
        {
            countType1++;
        }
        else if (sushi[right] == type2 || type2 == -1)
        {
            type2 = sushi[right];
            countType2++;
        }
        else
        {
            // Shrink the window until it becomes valid
            while (countType1 > 0 && countType2 > 0)
            {
                if (sushi[left] == type1)
                {
                    countType1--;
                }
                else
                {
                    countType2--;
                }
                left++;
            }
            if (countType1 == 0)
            {
                type1 = sushi[right];
                countType1 = 1;
            }
            else
            {
                type2 = sushi[right];
                countType2 = 1;
            }
        }

        // Update the maximum length of valid segment
        if (countType1 > 0 && countType2 > 0)
        {
            maxLength = max(maxLength, min(countType1, countType2) * 2);
        }
    }

    cout << maxLength << endl;
    return 0;
}
