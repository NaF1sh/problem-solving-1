#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    pair<char, char> input;

    cin >> input.first >> input.second;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        pair<char, char> input1;
        cin >> input1.first >> input1.second;
        if (input.first == input1.first || input.second == input1.second)
        {

            flag = true;
            break;
        }
    }

    if (flag)
        cout << "YES";
    else
    {
        cout << "NO";
    }
}