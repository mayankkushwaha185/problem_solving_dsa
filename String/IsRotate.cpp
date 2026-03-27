#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

bool isRotated2(string s, string goal)
{
    int m = s.length();
    int n = goal.length();
    if (m != n)
    {
        return false;
    }
    if ((s + s).find(goal) != string::npos)
    {
        return true;
    }
    return true;
}

// bool isRotate1(string s, string goal)
// {
//     int m = s.length();
//     int n = goal.length();
//     if (m != n)
//     {
//         return false;
//     }
//     for (int count = 0; count <= m; count++)
//     {
//         rotate(s.begin(), s.begin() + 1, s.end());

//         if (s == goal)
//         {
//             return true;
//         }
//     }
//     return false;
// }
int main()
{
    string s = "abcde";
    string goal = "bcdea";
    // bool result = isRotate1(s, goal);
    bool result = isRotated2(s, goal);
    cout << result;
}
