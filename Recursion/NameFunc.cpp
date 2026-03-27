using namespace std;
#include <iostream>

// Print name 5 times
void name(int start, int end)
{
    if (start > end)
    {
        return;
    }
    cout << start << endl;
    name(start + 1, end - 1);
}
void Print(int n)
{
    if (n == 0)
    {
        return;
    }
    Print(n - 1);
    cout << n << endl;
}
void PrintN2One(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    Print(n - 1);
}

int Sum(int totalSum, int i)
{
    if (i == 0)
    {
        return totalSum;
    }

    return Sum(totalSum + i, i - 1);
}

int main()
{
    int result = Sum(0, 3);
    cout << result;
}