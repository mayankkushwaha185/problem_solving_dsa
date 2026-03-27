#include <bits/stdc++.h>
using namespace std;

int RemoveLastSetBit(int n)
{
    return (n & n - 1);
}
int main()
{
    cout << RemoveLastSetBit(28);
}