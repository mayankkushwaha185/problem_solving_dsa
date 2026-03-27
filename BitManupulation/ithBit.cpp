#include <bits/stdc++.h>
using namespace std;

// bool checkIthBit(int n, int i)
// {
//     if (n & (1 << i))
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
bool checkIthBit(int n, int i)
{
    return ((n >> i) & 1);
}
int main()
{
    cout << checkIthBit(13, 12);
}