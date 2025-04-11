#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> cards(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> cards[i].first >> cards[i].second;
    }

       sort(cards.begin(), cards.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if (a.second != b.second)
            return a.second > b.second;
        return a.first > b.first; });

    int points = 0;
    int counter = 1;

    for (int i = 0; i < n && counter > 0; ++i)
    {
        points += cards[i].first;
        counter += cards[i].second - 1;
    }

    cout << points << endl;

    return 0;
}
