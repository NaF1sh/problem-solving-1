#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string bnum;
    cin >> bnum;

    int max = 0, current = 0;

    for (char c : bnum)
    {
        if (c == '0')
        {
            current++;
            if (current > max)
            {
                max = current;
            }
        }
        else
        {
            current = 0;
        }
    }

    cout << max << endl;

    return 0;
}
