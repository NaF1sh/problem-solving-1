#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)

int main()
{
    int s, v1, t1, v2, t2;
    cin >> s >> v1 >> t1 >> v2 >> t2;

    // Calculate total time for the first participant
    int totalTime1 = 2 * t1 + s * v1;

    // Calculate total time for the second participant
    int totalTime2 = 2 * t2 + s * v2;

    // Determine the winner
    if (totalTime1 < totalTime2)
    {
        cout << "First" << endl;
    }
    else if (totalTime2 < totalTime1)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}
