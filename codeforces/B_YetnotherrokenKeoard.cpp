#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define cases(n) \
    ll n;        \
    cin >> n;    \
    while (n--)
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    string a;
    cin >> a;

    list<char> a1;                           // Use `char` for the list to store actual characters
    stack<list<char>::iterator> last_cap;    // Store iterators to positions in the list
    stack<list<char>::iterator> last_no_cap; // For lowercase characters

    for (size_t i = 0; i < a.size(); i++)
    {
        if (!last_cap.empty() && a[i] == 'B') // If stack for uppercase is not empty and 'B' is pressed
        {
            a1.erase(last_cap.top()); // Erase the element at the iterator stored in `last_cap`
            last_cap.pop();           // Remove the reference from the stack
        }
        else if (!last_no_cap.empty() && a[i] == 'b') // If stack for lowercase is not empty and 'b' is pressed
        {
            a1.erase(last_no_cap.top()); // Erase the element at the iterator stored in `last_no_cap`
            last_no_cap.pop();           // Remove the reference from the stack
        }
        else if (a[i] != 'B' && a[i] != 'b') // If it's a normal character
        {
            // Add characters to the list and track their positions in the appropriate stack
            if (a[i] >= 'A' && a[i] <= 'Z') // Uppercase character
            {
                a1.push_back(a[i]);        // Add the character to the list
                last_cap.push(--a1.end()); // Push the iterator to the last element
            }
            else // Lowercase character
            {
                a1.push_back(a[i]);           // Add the character to the list
                last_no_cap.push(--a1.end()); // Push the iterator to the last element
            }
        }
    }

    for (auto it = a1.begin(); it != a1.end(); ++it) // Traverse and print the list
    {
        cout << *it;
    }
    cout << endl;
}

int main()
{
    fastread();
    cases(n)
    {
        solve();
    }
}
