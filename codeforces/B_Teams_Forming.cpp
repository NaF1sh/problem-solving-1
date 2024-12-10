#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    vector<int> students(t);

    for (int i = 0; i < t; i++)
    {
        cin >> students[i];
    }

    ll teams = t / 2;
    sort(students.begin(), students.end());
    ll sum = 0;
    for (int i = 0; i < t; i += 2)
    {
        sum += abs(students[i] - students[i + 1]);
    }
    cout << sum;
}