#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Laptop
{
    int speed;
    int ram;
    int hdd;
    int cost;
    bool outdated;
};

int main()
{
    int n;
    cin >> n;
    vector<Laptop> laptops(n);

    // Read laptop properties
    for (int i = 0; i < n; i++)
    {
        cin >> laptops[i].speed >> laptops[i].ram >> laptops[i].hdd >> laptops[i].cost;
        laptops[i].outdated = false;
    }

    // Compare laptops to mark outdated ones
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j &&
                laptops[i].speed < laptops[j].speed &&
                laptops[i].ram < laptops[j].ram &&
                laptops[i].hdd < laptops[j].hdd)
            {
                laptops[i].outdated = true;
                break;
            }
        }
    }

    int minCost = INT_MAX;
    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if (!laptops[i].outdated && laptops[i].cost < minCost)
        {
            minCost = laptops[i].cost;
            result = i + 1;
        }
    }

    cout << result << endl;
    return 0;
}
