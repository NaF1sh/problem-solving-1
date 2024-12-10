#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll int cases;
    cin >> cases;

    while (cases--)
    {
        string wn;
        cin >> wn;

        string year = wn.substr(0, 2);
        string dept = wn.substr(4, 3);
        string sem = wn.substr(2, 1);

                if (dept == "115")
        {
            cout << "CSE ";
        }
        else if (dept == "116")
            cout << "BBA ";
        else if (dept == "141")
            cout << "EEE ";
        else if (dept == "117")
            cout << "LLB ";
        else if (dept == "114")
            cout << "English ";
        else if (dept == "111")
            cout << "Economics ";

        if (sem == "1")
        {

            cout << "Spring ";
        }
        else if (sem == "2")
        {
            cout << "Summer ";
        }
        else if (sem == "3")
        {
            cout << "Autumn ";
        }
        cout << 20 << year << endl;
    }
}