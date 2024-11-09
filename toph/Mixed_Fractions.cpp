#include <iostream>

using namespace std;

int main()
{
    int N, D;

    cin >> N >> D;

    int whole_number = N / D;
    int numerator = N % D;
    int denominator = D;

    cout << whole_number << " " << numerator << " " << denominator << endl;

    return 0;
}