#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> results;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int result = (a ^ b);

        results.push_back(result);
    }

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
