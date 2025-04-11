#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    bool isAliceTurn = true;
    int totalSum = 0;
    int whiteAlice = 0, whiteBob = 0, blackAlice = 0, blackBob = 0;
    int currentCard = 1;

    while (n > 0)
    {
        if (isAliceTurn)
        {
            if (n >= currentCard)
            {
                n -= currentCard;
                if (totalSum & 1)
                {
                    whiteAlice += (currentCard / 2);
                    blackAlice += currentCard - (currentCard / 2);
                }
                else
                {
                    blackAlice += (currentCard / 2);
                    whiteAlice += currentCard - (currentCard / 2);
                }
                totalSum += currentCard;
                currentCard++;
                if (n >= currentCard)
                {
                    n -= currentCard;
                    if (totalSum & 1)
                    {
                        whiteBob += (currentCard / 2);
                        blackBob += currentCard - (currentCard / 2);
                    }
                    else
                    {
                        blackBob += (currentCard / 2);
                        whiteBob += currentCard - (currentCard / 2);
                    }
                    totalSum += currentCard;
                    currentCard++;
                }
                else
                {
                    if (totalSum & 1)
                    {
                        whiteBob += (n / 2);
                        blackBob += n - (n / 2);
                    }
                    else
                    {
                        blackBob += (n / 2);
                        whiteBob += n - (n / 2);
                    }
                    totalSum += n;
                    n = 0;
                }
            }
            else
            {
                if (totalSum & 1)
                {
                    whiteAlice += (n / 2);
                    blackAlice += n - (n / 2);
                }
                else
                {
                    blackAlice += (n / 2);
                    whiteAlice += n - (n / 2);
                }
                totalSum += n;
                n = 0;
            }
            isAliceTurn = false;
        }
        else
        {
            if (n >= currentCard)
            {
                n -= currentCard;
                if (totalSum & 1)
                {
                    whiteBob += (currentCard / 2);
                    blackBob += currentCard - (currentCard / 2);
                }
                else
                {
                    blackBob += (currentCard / 2);
                    whiteBob += currentCard - (currentCard / 2);
                }
                totalSum += currentCard;
                currentCard++;
                if (n >= currentCard)
                {
                    n -= currentCard;
                    if (totalSum & 1)
                    {
                        whiteAlice += (currentCard / 2);
                        blackAlice += currentCard - (currentCard / 2);
                    }
                    else
                    {
                        blackAlice += (currentCard / 2);
                        whiteAlice += currentCard - (currentCard / 2);
                    }
                    totalSum += currentCard;
                    currentCard++;
                }
                else
                {
                    if (totalSum & 1)
                    {
                        whiteAlice += (n / 2);
                        blackAlice += n - (n / 2);
                    }
                    else
                    {
                        blackAlice += (n / 2);
                        whiteAlice += n - (n / 2);
                    }
                    totalSum += n;
                    n = 0;
                }
            }
            else
            {
                if (totalSum & 1)
                {
                    whiteBob += (n / 2);
                    blackBob += n - (n / 2);
                }
                else
                {
                    blackBob += (n / 2);
                    whiteBob += n - (n / 2);
                }
                totalSum += n;
                n = 0;
            }
            isAliceTurn = true;
        }
    }

    cout << whiteAlice << " " << blackAlice << " " << whiteBob << " " << blackBob << endl;
}

int main()
{
    int testCase = 1;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}