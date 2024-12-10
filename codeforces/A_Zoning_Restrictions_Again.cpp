#include <bits/stdc++.h>
using namespace std;

int main()
{

    int Number_of_house;
    cin >> Number_of_house;

    int max_height;
    cin >> max_height;

    int restric;
    cin >> restric;

    vector<int> houses(Number_of_house);

    for (int i = 0; i < Number_of_house; i++)
    {
        houses[i] = max_height;
    }
    while (restric--)
    {
        int l;
        int k;
        int new_height;
        cin >> l >> k >> new_height;
        l = l - 1;
        k = k - 1;
        for (int i = l; i <= k; i++)
        {
            houses[i] = min(houses[i], new_height);
        }
    }
    int sum = 0;
    for (int i = 0; i < Number_of_house; i++)
    {
        sum += houses[i] * houses[i];
    }
    cout << sum;
}