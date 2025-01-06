#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    string input;
    cin >> input;

    multiset<char> order; // Use multiset to store characters
    vector<int> signs;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
            order.insert(input[i]); // Insert characters into the multiset
        if (input[i] == '+')
            signs.push_back(i);
    }

    auto it = order.begin();
    for (int i = 0; i < input.size(); i++)
    {
        if (find(signs.begin(), signs.end(), i) != signs.end())
        {
            cout << "+";
        }
        else
        {
            if (it != order.end())
            {
                cout << *it;
                it++;
            }
        }
    }

    return 0;
}
