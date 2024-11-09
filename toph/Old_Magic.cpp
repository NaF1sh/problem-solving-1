#include <bits/stdc++.h>
#define Team_blackslash return 0;
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    stack<string> words;
    stack<int> number;
    int t1 = t;
    while (t1--)
    {

        string string1;
        cin >> string1;
        words.push(string1);

        int num;
        cin >> num;
        number.push(num);
    }
    long long int sum;
    cin >> sum;
    for (int i = 0; i < t; i++)
    {
        if (words.top() == "divide")
        {

            sum = sum * number.top();
            words.pop();
            number.pop();
        }

        else if (words.top() == "multiply")
        {

            sum = sum / number.top();
            words.pop();
            number.pop();
        }
        else if (words.top() == "subtract")
        {

            sum = sum + number.top();
            words.pop();
            number.pop();
        }
        else if (words.top() == "add")
        {

            sum = sum - number.top();
            words.pop();
            number.pop();
        }
    }

    cout << sum;
}