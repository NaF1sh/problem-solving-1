#include <bits/stdc++.h>

using namespace std;

int main()
{
    int taka;
    cin >> taka;

    vector<int> arr;
    while (taka > 0)
    {
        if (taka >= 500)
        {
            taka -= 500;
            arr.push_back(500);
        }
        else if (taka >= 100)
        {
            taka -= 100;
            arr.push_back(100);
        }
        else if (taka >= 50)
        {
            taka -= 50;
            arr.push_back(50);
        }
        else if (taka >= 10)
        {
            taka -= 10;
            arr.push_back(10);
        }
        else if (taka >= 5)
        {
            taka -= 5;
            arr.push_back(5);
        }
        else if (taka >= 1)
        {
            taka -= 1;
            arr.push_back(1);
        }
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
