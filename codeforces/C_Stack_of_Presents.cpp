#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        int n, m;
        cin >> n >> m;

        list<int> stack1;
        stack<int> tempStack;

        for (int i = 0; i < n; i++)
        {
            int no;
            cin >> no;
            stack1.push_back(no);
        }

        int totalCount = 0;
        for (int i = 0; i < m; i++)
        {
            int no;
            cin >> no;

            int moveCount = 0;
            // Use iterator to find the element
            auto it = stack1.begin();
            while (it != stack1.end() && *it != no)
            {
                tempStack.push(*it);
                it = stack1.erase(it);
                moveCount++;
            }

            if (it != stack1.end() && *it == no)
            {
                // Element found, remove it and count moves
                stack1.erase(it);
                totalCount += 2 * moveCount + 1;
            }
            else
            {
                // Handle the case where the element is not found
                cout << "Element " << no << " not found in stack1." << endl;
                continue;
            }

            // Move elements back from tempStack to stack1
            while (!tempStack.empty())
            {
                stack1.push_front(tempStack.top());
                tempStack.pop();
            }
        }
        cout << totalCount << endl;
    }
    return 0;
}
