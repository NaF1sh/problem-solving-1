#include <bits/stdc++.h>
using namespace std;

int main()
{

    string word;
    getline(cin, word);
    int count = 0, count1 = 0;

    for (char c : word)
    {
        if (c >= 'A' && c <= 'Z')
            count++;

        else if (c >= 'a' && c <= 'z')
            count1++;
    }
    cout << count << " " << count1;
}