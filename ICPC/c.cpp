#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    bool flag = true;

    int array[t];
    for (int i = 0; i < t; i++)

    {
        cin >> array[i];
    }
    int arr[t];
    for (int i = 0; i < t; ++i)
    {
        arr[i] = 2;
    }
    int t1 = t;

    for (int i = 0; i < t; i++)
    {
        if (array[i] == 0)
        {

            arr[i] = arr[i] - 2;
        }
        else
        {
            if (array[i] > 6 || array[i] < 0)
            {
                flag = false;
                break;
            }
            else
            {
                while (array[i] <= 0)
                {
                    if (array[i] % 3 == 0)
                    {

                        int sum = array[i] % 3;
                        array[i] = array[i] - sum;
                        arr[i] = arr[i] - sum;
                    }
                    else
                    {
                        array[i]--;
                    }
                }
                if (arr[i] < 0)
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    if (flag == false)
    {
        cout << "Imperfect" << endl;
    }

    else if (flag == true)
    {
        cout << "Perfect" << endl;
    }
    return 0;
}