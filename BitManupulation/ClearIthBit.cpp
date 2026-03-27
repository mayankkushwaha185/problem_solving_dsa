#include <bits/stdc++.h>
using namespace std;

int ClearithBit(int n, int i)
{
    return n & ~(1 << i);
}
int main()
{
    cout << ClearithBit(13, 3);
}