#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> columns(n, 0); 
    int points = 0;

    for (int i = 0; i < m; ++i)
    {
        int column;
        cin >> column;
        columns[column - 1]++;

        bool fullRow = true;
        for (int j = 0; j < n; ++j)
        {
            if (columns[j] == 0)
            {
                fullRow = false;
                break;
            }
        }

        if (fullRow)
        {
            points++; 
            for (int j = 0; j < n; ++j)
            {
                columns[j]--; 
            }
        }
    }

    cout << points << endl;
    return 0;
}
