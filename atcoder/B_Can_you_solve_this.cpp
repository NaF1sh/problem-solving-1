#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, C;

    cin >> N >> M >> C;

    int A[M];
    int B[M];
    int ans = 0;
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < M; j++)
        {
            cin >> A[j];
            count = count + (A[j] * B[j]);
        }
        if (count + C > 0)
        {
            ans++;
        }
    }
    cout << ans;
}