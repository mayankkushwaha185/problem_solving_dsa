#include <iostream>
using namespace std;

string RemoveOuterMost(string s)
{
    string result = "";
    int level = 0;
    for (char ch : s)
    {
        if (ch == '(')
        {
            if (level > 0)
            {
                result = result + ch;
            }
            level++;
        }
        else if (ch == ')')
        {
            level--;
            if (level > 0)
            {
                result = result + ch;
            }
        }
    }
    cout << result;
    return result;
}

int main()
{
    string s = "(()()(()()))";
    RemoveOuterMost(s);
}
