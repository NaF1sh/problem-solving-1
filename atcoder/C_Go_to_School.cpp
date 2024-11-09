#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;

    cin >> N;
    int stdents[N];

    for (int i = 1; i <= N; i++)
    {
        cin >> stdents[i];
    }

    int array2[N] = {0};

    for (int i = 1; i <= N; i++)
    {
        int a = stdents[i];
        array2[a] = i;
    }

    for (int i = 1; i <= N; i++)
    {
        cout << array2[i] << " ";
    }
}