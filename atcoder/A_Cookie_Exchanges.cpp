#include <bits/stdc++.h>

using namespace std;

int main()
{

    int A, B, C;

    cin >> A >> B >> C;

    bool status = true;
    int count = 0;
    while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0)
    {

        if (A == B && B == C)
        {
            status = false;
            break;
        }
        int a = (B + C) / 2;
        int b = (A + C) / 2;
        int c = (B + A) / 2;

        A = a;
        B = b;
        C = c;
        count++;
    }

    if (status)
    {
        cout << count;
    }
    else
    {
        cout << "-1";
    }
}