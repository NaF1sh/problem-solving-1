void solve(istream &in, ostream &out)
{
    ll n;
    in >> n;
    ll count = 0;
    ll digits = 1;
    ll start = 1;

    while (start <= n)
    {
        ll end = min(n, start * 10 - 1);
        count += (end - start + 1) * digits;
        start *= 10;
        digits++;
    }

    out << count;
}
