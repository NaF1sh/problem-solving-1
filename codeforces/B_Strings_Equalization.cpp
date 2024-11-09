#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool canTransform(const string &a, const string &t)
{
    unordered_set<char> setA(a.begin(), a.end());
    unordered_set<char> setT(t.begin(), t.end());

    for (char c : setT)
    {
        if (setA.find(c) != setA.end())
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string a, t;
        cin >> a >> t;
        if (canTransform(a, t))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
