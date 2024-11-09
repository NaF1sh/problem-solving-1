#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases, A, B;
    cin >> cases >> A >> B;
    int array[cases];
    for (int i = 0; i < cases; i++)
    {
        cin >> array[i];
    }
    int count = 0;

    for (int i = A; i <= B; i++)
    {
        count += array[i];
    }

    cout << count;
}