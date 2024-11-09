#include <bits/stdc++.h>
using namespace std;

int main()
{

    string word;
    cin >> word;

    vector<char> ans;
    for (char con : word)
    {

        if (con != 'a' && con != 'e' && con != 'i' && con != 'o' && con != 'u' && con != 'A' && con != 'E' && con != 'I' && con != 'O' && con != 'U' && con != 'y' && con != 'Y')
        {

            ans.push_back('.');
            if (con >= 'A' && con <= 'Z')
            {
                ans.push_back(con + 32);
            }
            else
            {
                ans.push_back(con);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}