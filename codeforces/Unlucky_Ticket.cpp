#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    string ticket;

    // Read input
    cin >> n >> ticket;

    // Split the ticket into two halves
    vector<int> firstHalf, secondHalf;
    for (int i = 0; i < n; i++)
    {
        firstHalf.push_back(ticket[i] - '0');      // Convert char to int
        secondHalf.push_back(ticket[i + n] - '0'); // Convert char to int
    }

    // Sort both halves
    sort(firstHalf.begin(), firstHalf.end());
    sort(secondHalf.begin(), secondHalf.end());

    // Check if all firstHalf elements are strictly less or strictly greater than secondHalf elements
    bool strictlyLess = true, strictlyGreater = true;
    for (int i = 0; i < n; i++)
    {
        if (firstHalf[i] >= secondHalf[i])
            strictlyLess = false;
        if (firstHalf[i] <= secondHalf[i])
            strictlyGreater = false;
    }

    // If either condition holds, the ticket is definitely unlucky
    if (strictlyLess || strictlyGreater)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
