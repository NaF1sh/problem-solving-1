#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to multiply two large numbers represented as strings
string multiplyStrings(string num1, string num2)
{
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0)
        return "0";

    vector<int> result(n1 + n2, 0);
    int i_n1 = 0, i_n2 = 0;

    for (int i = n1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1_digit = num1[i] - '0';
        i_n2 = 0;

        for (int j = n2 - 1; j >= 0; j--)
        {
            int n2_digit = num2[j] - '0';
            int sum = n1_digit * n2_digit + result[i_n1 + i_n2] + carry;
            carry = sum / 10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }

    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
        i--;
    if (i == -1)
        return "0";

    string resultStr;
    while (i >= 0)
        resultStr += to_string(result[i--]);

    return resultStr;
}

// Function to compute a^b using strings
string power(int a, int b)
{
    string result = "1";
    string base = to_string(a);

    while (b > 0)
    {
        if (b % 2 == 1)
        {
            result = multiplyStrings(result, base);
        }
        base = multiplyStrings(base, base);
        b /= 2;
    }

    return result;
}

// Function to subtract two large numbers represented as strings
string subtractStrings(string num1, string num2)
{
    if (num1 == num2)
        return "0";

    bool negative = false;
    if (num1.size() < num2.size() || (num1.size() == num2.size() && num1 < num2))
    {
        swap(num1, num2);
        negative = true;
    }

    int n1 = num1.size();
    int n2 = num2.size();
    vector<int> result(n1, 0);

    int carry = 0;
    for (int i = 0; i < n2; i++)
    {
        int sub = (num1[n1 - 1 - i] - '0') - (num2[n2 - 1 - i] - '0') - carry;
        if (sub < 0)
        {
            sub += 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        result[n1 - 1 - i] = sub;
    }

    for (int i = n2; i < n1; i++)
    {
        int sub = (num1[n1 - 1 - i] - '0') - carry;
        if (sub < 0)
        {
            sub += 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        result[n1 - 1 - i] = sub;
    }

    int i = 0;
    while (i < result.size() && result[i] == 0)
        i++;
    string resultStr;
    while (i < result.size())
        resultStr += to_string(result[i++]);

    if (negative)
        resultStr = "-" + resultStr;

    return resultStr;
}

int main()
{
    int a, b;
    cin >> a >> b;

    string pa = power(a, b);
    string pb = power(b, a);

    string result = subtractStrings(pa, pb);

    cout << result << endl;

    return 0;
}
