#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, num, i, num1 = 0;
    cin >> n;

    vector<int> v;
    for (i = 1; i <= n * n; ++i)
    {
        v.push_back(i);
    }

    num = 0;
    num1 = n;

    while (num1--)
    {
        for (i = num; i < num + n / 2; ++i)
        {
            cout << v[i] << " ";
        }

        for (i = v.size() - num - 1; i >= v.size() - num - n / 2; --i)
        {
            cout << v[i] << " ";
        }

        num += n / 2;
        cout << endl;
    }

    return 0;
}