#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &memo)
{
    if (memo[n] != -1)
        return memo[n]; // Check storage
    if (n <= 1)
        return n;                                  // Base cases
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo); // Calculate if needed and store result
    return memo[n];                                // Return result
}

int main()
{
    int n = 10;                                                         // Example input
    vector<int> memo(n + 1, -1);                                        // Initialize storage
    cout << "Fibonacci number " << n << " is " << fib(n, memo) << endl; // Output result
    return 0;
}
