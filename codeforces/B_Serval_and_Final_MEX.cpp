#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastread()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int computeMex(const vector<int> &array, int left, int right)
{
    bool present[4] = {false, false, false, false};
    for (int i = left; i <= right; i++)
    {
        if (array[i] < 4)
            present[array[i]] = true;
    }
    for (int x = 0; x < 4; x++)
    {
        if (!present[x])
            return x;
    }
    return 4;
}

void solve()
{
    int arraySize;
    cin >> arraySize;
    vector<int> array(arraySize);
    for (auto &element : array)
        cin >> element;

    vector<pair<int, int>> operations;

    while ((int)array.size() > 3)
    {
        bool hasZero = false;
        for (auto element : array)
        {
            if (element == 0)
            {
                hasZero = true;
                break;
            }
        }
        if (hasZero)
        {
            int zeroPosition = -1;
            for (int i = 0; i < (int)array.size(); i++)
            {
                if (array[i] == 0)
                {
                    zeroPosition = i;
                    break;
                }
            }
            if (zeroPosition == 0)
            {
                int mexValue = computeMex(array, 0, 1);
                operations.push_back({1, 2});
                vector<int> newArray;
                newArray.push_back(mexValue);
                for (int i = 2; i < (int)array.size(); i++)
                {
                    newArray.push_back(array[i]);
                }
                array = newArray;
            }
            else
            {
                int mexValue = computeMex(array, zeroPosition - 1, zeroPosition);
                operations.push_back({zeroPosition, zeroPosition + 1});
                vector<int> newArray;
                for (int i = 0; i < zeroPosition - 1; i++)
                {
                    newArray.push_back(array[i]);
                }
                newArray.push_back(mexValue);
                for (int i = zeroPosition + 1; i < (int)array.size(); i++)
                {
                    newArray.push_back(array[i]);
                }
                array = newArray;
            }
        }
        else
        {
            int mexValue = computeMex(array, 0, array.size() - 1);
            operations.push_back({1, (int)array.size()});
            vector<int> newArray;
            newArray.push_back(mexValue);
            array = newArray;
            break;
        }
        if (array.size() == 3)
        {
            int mexValue = computeMex(array, 0, 1);
            if (mexValue != 0 && array[2] != 0)
            {
                operations.push_back({1, 2});
                vector<int> newArray;
                newArray.push_back(mexValue);
                newArray.push_back(array[2]);
                array = newArray;
            }
            else
            {
                int mexValue2 = computeMex(array, 1, 2);
                if (array[0] != 0 && mexValue2 != 0)
                {
                    operations.push_back({2, 3});
                    vector<int> newArray;
                    newArray.push_back(array[0]);
                    newArray.push_back(mexValue2);
                    array = newArray;
                }
                else
                {
                    operations.push_back({1, 3});
                    int mexValue3 = computeMex(array, 0, 2);
                    vector<int> newArray;
                    newArray.push_back(mexValue3);
                    array = newArray;
                }
            }
        }

        if (array.size() == 2)
        {
            int mexValue = computeMex(array, 0, 1);
            operations.push_back({1, 2});
            vector<int> newArray;
            newArray.push_back(mexValue);
            array = newArray;
        }
    }

    cout << operations.size() << "\n";
    for (auto &operation : operations)
    {
        cout << operation.first << " " << operation.second << "\n";
    }
}

int main()
{
    fastread();
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}