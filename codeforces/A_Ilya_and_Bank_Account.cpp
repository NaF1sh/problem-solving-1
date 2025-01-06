#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string input;
    cin >> input;

    if (input[0] == '-')
    {
        // Consider two options: removing the last digit or the second last digit
        string option1 = input.substr(0, input.size() - 1);                // Remove the last digit
        string option2 = input.substr(0, input.size() - 2) + input.back(); // Remove the second last digit

        // Convert to integers to compare
        ll val1 = stoll(option1);
        ll val2 = stoll(option2);

        cout << max(val1, val2) << endl;
    }
    else
    {
        cout << input << endl;
    }

    return 0;
}
