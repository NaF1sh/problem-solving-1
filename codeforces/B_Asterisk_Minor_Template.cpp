#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    if (a[0] == b[0])
    {
        cout << "YES\n"
             << a[0] << "*\n";
        return;
    }

    if (a.back() == b.back())
    {
        cout << "YES\n"
             << "*" << a.back() << "\n";
        return;
    }

    for (size_t i = 0; i < b.size() - 1; i++)
    {
        string sub = b.substr(i, 2);
        if (a.find(sub) != string::npos)
        {
            cout << "YES\n"
                 << "*" << sub << "*\n";
            return;
        }
    }

    // No valid template found
    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
