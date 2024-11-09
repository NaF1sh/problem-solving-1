#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    if (year < 1582)
    {

        return year % 4 == 0;
    }
    else
    {

        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
}

int main()
{
    int N;
    cin >> N;

    if (isLeapYear(N))
    {
        cout << "I can participate in LCPC" << endl;
    }
    else
    {
        cout << "I have to travel back to the past" << endl;
    }

    return 0;
}
