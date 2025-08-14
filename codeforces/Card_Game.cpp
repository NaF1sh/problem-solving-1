#include <bits/stdc++.h>
using namespace std;

// === CONFIGURATION ===
#define USE_FILE_IO false // Set to true to use input.txt/output.txt
// ======================

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define file_io()                       \
    ifstream fin("input.txt");          \
    ofstream fout("output.txt");        \
    if (!fin || !fout)                  \
    {                                   \
        cerr << "Error opening file\n"; \
        exit(1);                        \
    }                                   \
    istream &in = fin;                  \
    ostream &out = fout;

#define standard_io()  \
    istream &in = cin; \
    ostream &out = cout;

#define cases(t) \
    ll t;        \
    in >> t;     \
    while (t--)
#define GCD(a, b) ((b) == 0 ? (a) : GCD((b), (a) % (b)))
/////////////////////////////////////////////////////////////////////////////////////////
void solve(istream &in, ostream &out)
{
    vector<string> cards = {"6S", "7S", "8S", "9S", "TS", "JS", "QS", "KS", "AS",
                            "6H", "7H", "8H", "9H", "TH", "JH", "QH", "KH", "AH",
                            "6D", "7D", "8D", "9D", "TD", "JD", "QD", "KD", "AD",
                            "6C", "7C", "8C", "9C", "TC", "JC", "QC", "KC", "AC"};

    char trump;
    cin >> trump;

    string card1, card2;
    cin >> card1 >> card2;

    if (card1[1] == trump && card2[1] != trump)
    {
        cout << "YES";
    }
    else if (card1[1] != trump && card2[1] == trump)
    {
        cout << "NO";
    }
    else if (card1[1] == card2[1])
    {
        ll card1i = find(cards.begin(), cards.end(), card1) - cards.begin();
        ll card2i = find(cards.begin(), cards.end(), card2) - cards.begin();

        if (card1i >= card2i)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else

    {
        cout << "NO";
    }
}

main()
{
    fastread();

#if USE_FILE_IO
    file_io();
#else
    standard_io();
#endif

    solve(in, out); // Solve each test case

    return 0;
}
