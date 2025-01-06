#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./ ";

    char c;
    cin >> c;
    string output;
    cin >> output;
    string string1;
    if (c == 'R')
    {
        for (char c1 : output)
        {
            for (int i = 0; i < keyboard.size(); i++)
            {
                if (c1 == keyboard[i])
                {
                    string1 += keyboard[i - 1];
                    break;
                }
            }
        }
    }
    else
    {
        for (char c1 : output)
        {
            for (int i = 0; i < keyboard.size(); i++)
            {
                if (c1 == keyboard[i])
                {
                    string1 += keyboard[i + 1];
                    break;
                }
            }
        }
    }
    cout << string1;
}
