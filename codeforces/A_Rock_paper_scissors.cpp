#include <iostream>
#include <string>
using namespace std;

int main()
{
    string f, m, s;
    cin >> f >> m >> s;

    if ((f == "rock" && m == "scissors" && s == "scissors") ||
        (f == "scissors" && m == "paper" && s == "paper") ||
        (f == "paper" && m == "rock" && s == "rock"))
    {
        cout << "F" << endl;
    }
    else if ((m == "rock" && f == "scissors" && s == "scissors") ||
             (m == "scissors" && f == "paper" && s == "paper") ||
             (m == "paper" && f == "rock" && s == "rock"))
    {
        cout << "M" << endl;
    }
    else if ((s == "rock" && f == "scissors" && m == "scissors") ||
             (s == "scissors" && f == "paper" && m == "paper") ||
             (s == "paper" && f == "rock" && m == "rock"))
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "?" << endl;
    }

    return 0;
}
