#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // Apply 'digit' three times to reduce x to a single digit
        cout << "digit" << endl;
        cout.flush();
        string res;
        getline(cin >> ws, res);
        cout << "digit" << endl;
        cout.flush();
        getline(cin >> ws, res);
        cout << "digit" << endl;
        cout.flush();
        getline(cin >> ws, res);

        // Multiply by 9 to make it a multiple of 9
        cout << "mul 9" << endl;
        cout.flush();
        getline(cin >> ws, res);

        // Apply 'digit' to get 9
        cout << "digit" << endl;
        cout.flush();
        getline(cin >> ws, res);

        // Add (n - 9) to reach the target
        cout << "add " << (n - 9) << endl;
        cout.flush();
        getline(cin >> ws, res);

        // Final check
        cout << "!" << endl;
        cout.flush();
        getline(cin >> ws, res);
    }
    return 0;
}