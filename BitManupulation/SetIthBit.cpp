#include <bits/stdc++.h>
using namespace std;

int setithBit(int n, int i)
{
    return (n | (1 << i));
}
int main()
{
    cout << setithBit(13, 1);
}