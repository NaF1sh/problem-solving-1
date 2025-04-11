#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> chips(n);
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> chips[i];
        if (chips[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    int min_moves = min(even_count, odd_count);
    cout << min_moves << endl;

    return 0;
}
