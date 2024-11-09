#include <bits/stdc++.h>

using namespace std;

int main()
{

    int cases;
    cin >> cases;
    while (cases--)
    {
        string num;
        cin >> num;
        for (char num1 : num)
        {
            if (num1 == '0')
            {
                cout << "Goodbye ";
            }

            else if (num1 == '1')
            {

                cout << "Welcome ";
            }
        }
        cout << endl;
    }
}