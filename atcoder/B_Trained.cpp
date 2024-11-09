#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N + 1);
    for (int i = 1; i <= N; ++i)
    {
        cin >> A[i];
    }

    int count = 0;
    int current = 1;
    vector<bool> visited(N + 1, false);

    while (!visited[current])
    {
        if (current == 2)
        {
            cout << count << endl;
            return 0;
        }
        visited[current] = true;
        current = A[current];
        ++count;
    }

    cout << -1 << endl;
    return 0;
}
