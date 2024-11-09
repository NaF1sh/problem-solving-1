#include <bits/stdc++.h>

using namespace std;

int main()
{

    string word;

    getline(cin, word);
    int count = 0;

    for (char c : word)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            count++;
        }
    }

    cout << count;
}