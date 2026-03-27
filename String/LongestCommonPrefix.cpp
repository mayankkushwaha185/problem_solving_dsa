#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string LSP(vector<string> &s)
{
    if (s.size() == 0)
    {
        return "";
    }
    sort(s.begin(), s.end());
    string first = s[0];
    string last = s[s.size() - 1];

    int i = 0;
    while (i < first.size() && i < last.size() && first[i] == last[i])
    {
        i++;
    }
    return first.substr(0, i);
}

int main()
{
    vector<string> s = {"flower", "flight", "flow"};
    string result = LSP(s);
    cout << result;
}