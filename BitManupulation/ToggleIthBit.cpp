#include <bits/stdc++.h>
using namespace std;

int ToggleithBit(int n, int i)
{
    return n ^ (1 << i);
}
int main()
{
    cout << ToggleithBit(13, 1);
}