#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> result;

    while (n > 0)
    {
        if (n >= 9)
        {
            result.push_back(9);
            n -= 9;
        }
        else
        {
            result.push_back(n);
            n = 0;
        }
    }

    // Output the result
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
