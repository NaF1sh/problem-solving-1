class Solution
{
public:
    void bitManipulation(int num, int i)
    {
        cout << getithbit(num, i) << " ";
        cout << setithbit(num, i) << " ";
        cout << clearithbit(num, i) << endl;
    }

private:
    int getithbit(int num, int i) { return (num & (1 << (i - 1))) ? 1 : 0; }
    int setithbit(int num, int i) { return num | (1 << (i - 1)); }
    int clearithbit(int num, int i) { return num & (~(1 << (i - 1))); }
};