#include <bits/stdc++.h>

using namespace std;

int main()
{

    string input;

    getline(cin, input);
    bool flag = false;
    int length = input.size();

    if (input[length - 3] == 's')
    {
        if (input[length - 2] == 'a')
        {
            if (input[length - 1] == 'n')
            {

                flag = true;
            }
        }
    }
    if (flag == true)
    {
        cout << "Yes";
    }

    else
    {
        cout << "No";
    }
}