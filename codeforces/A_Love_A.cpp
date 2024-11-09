#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count_a = 0;
    for (char c : s)
    {
        if (c == 'a')
        {
            count_a++;
        }
    }

    int max_length = min(static_cast<int>(s.length()), 2 * count_a - 1);
    cout << max_length << endl;

    return 0;
}
