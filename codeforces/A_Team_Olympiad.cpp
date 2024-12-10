#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    vector<int> teams(t);
    vector<int> indices1, indices2, indices3; // To store indices of each type
    ll pt1 = 0, pt2 = 0, pt3 = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> teams[i];
        if (teams[i] == 1)
        {
            pt1++;
            indices1.push_back(i + 1); // Store 1-based index
        }
        else if (teams[i] == 2)
        {
            pt2++;
            indices2.push_back(i + 1); // Store 1-based index
        }
        else if (teams[i] == 3)
        {
            pt3++;
            indices3.push_back(i + 1); // Store 1-based index
        }
    }

    // The maximum number of teams is the minimum count of the three groups
    ll maxTeams = min({pt1, pt2, pt3});

    if (maxTeams == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << maxTeams << endl;
        for (int i = 0; i < maxTeams; i++)
        {
            cout << indices1[i] << " " << indices2[i] << " " << indices3[i] << endl;
        }
    }

    return 0;
}
