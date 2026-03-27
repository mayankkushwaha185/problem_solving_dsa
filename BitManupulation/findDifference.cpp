#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcd";
    string t = "acbde";

    char ans = 0;
    for (char ch : s)
    {
        ans = ans ^ ch;
        cout << ans << endl;
    }
    for (char ch : t)
    {
        ans = ans ^ ch;
        cout << ans << endl;
    }
}