#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        ll totalPerimeter = 0;
        int prevX = 0, prevY = 0;
        for (int i = 0; i < n; i++)
        {
            int dx, dy;
            cin >> dx >> dy;

            int currentX = prevX + dx;
            int currentY = prevY + dy;

            totalPerimeter += 4 * m;

            if (i > 0)
            {
                int horizontalOverlap = max(0, m - abs(currentX - prevX));
                int verticalOverlap = max(0, m - abs(currentY - prevY));
                totalPerimeter -= 2 * (horizontalOverlap + verticalOverlap);
            }

            prevX = currentX;
            prevY = currentY;
        }

        cout << totalPerimeter << endl;
    }

    return 0;
}
