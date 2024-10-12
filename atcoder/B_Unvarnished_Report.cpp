#include <bits/stdc++.h>

using namespace std;

int main()
{

    string input, input1;

    cin >> input >> input1;
    int length = input.size();
    int length1 = input1.size();
    int ans;
    length = max(length, length1);
    bool flag = false;
    for (int i = 0; i < length; i++)
    {
        if (input[i] != input1[i])
        {
            ans = i + 1;
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << ans;
    }
    else
    {
        cout << 0;
    }
}
