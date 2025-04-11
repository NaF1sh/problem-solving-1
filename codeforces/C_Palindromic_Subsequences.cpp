#include <iostream>
#include <vector>

using namespace std;

vector<int> generate_sequence(int n)
{
    vector<int> sequence;
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n / 2; ++i)
        {
            sequence.push_back(i);
        }
        for (int i = n / 2; i > 0; --i)
        {
            sequence.push_back(i);
        }
    }
    else
    {
        for (int i = 1; i <= n / 2; ++i)
        {
            sequence.push_back(i);
        }
        sequence.push_back((n / 2) + 1);
        for (int i = n / 2; i > 0; --i)
        {
            sequence.push_back(i);
        }
    }
    return sequence;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> result = generate_sequence(n);
        for (int num : result)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
