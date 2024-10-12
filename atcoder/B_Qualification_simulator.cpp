#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, A, B;
    string input;

    cin >> N >> A >> B;
    cin.ignore();
    getline(cin, input);
    int count = 0;
    int count1 = 0;

    for (int i = 0; i < N; i++)
    {
        if (input[i] == 'a' && count < A + B)
        {
            cout << "Yes" << endl;
            count++;
        }
        else if (input[i] == 'b' && count < A + B && count1 < B)
        {
            cout << "Yes" << endl;
            count++;
            count1++;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}