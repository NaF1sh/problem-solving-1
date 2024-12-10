#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {

        int digit = input[i] - '0';

        int inverted = 9 - digit;

        if (i == 0 && inverted == 0)
        {
            continue;
        }

        if (inverted < digit)
        {
            input[i] = '0' + inverted;
        }
    }

    cout << input << endl;
    return 0;
}
