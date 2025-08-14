#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

const int BOUND = 200;

int main()
{
    fastread();

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;

        vector<ll> dist(BOUND + 1, LLONG_MAX);
        priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;

        dist[a] = 0;
        pq.push({0, a});

        while (!pq.empty())
        {
            auto [cost, u] = pq.top();
            pq.pop();

            if (u == b)
            {
                break;
            }

            if (cost != dist[u])
                continue;

            if (u < BOUND)
            {
                int v = u + 1;
                ll new_cost = cost + x;
                if (new_cost < dist[v])
                {
                    dist[v] = new_cost;
                    pq.push({new_cost, v});
                }
            }

            if (u % 2 == 0)
            {
                int v = u + 1;
                if (v <= BOUND)
                {
                    ll new_cost = cost + y;
                    if (new_cost < dist[v])
                    {
                        dist[v] = new_cost;
                        pq.push({new_cost, v});
                    }
                }
            }
            else
            {
                int v = u - 1;
                if (v >= 0)
                {
                    ll new_cost = cost + y;
                    if (new_cost < dist[v])
                    {
                        dist[v] = new_cost;
                        pq.push({new_cost, v});
                    }
                }
            }
        }

        if (dist[b] == LLONG_MAX)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << dist[b] << '\n';
        }
    }

    return 0;
}