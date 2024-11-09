#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A11, A12, A13, A14;

    int B11, B12, B13, B14;

    cin >> A11 >> A12 >> A13 >> A14;
    cin >> B11 >> B12 >> B13 >> B14;

    int c11 = A11 * B11 + A12 * B13;
    int c12 = A11 * B12 + A12 * B14;
    int c13 = A13 * B11 + A14 * B13;
    int c14 = A13 * B12 + A14 * B14;

    cout << c11 << " " << c12 << endl
         << c13 << " " << c14;
}