#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

int beautifulString(string s)
{
    int total_beauty = 0;
    for (int i = 0; i < s.size(); i++)
    {
        vector<int> vec(26);
        for (int j = i; j < s.size(); j++)
        {
            vec[s[j] - 'a'] = vec[s[j] - 'a'] + 1;

            int mini = INT_MAX;
            int maxi = 0;
            for (int k = 0; k < vec.size(); k++)
            {
                if (vec[k] > 0)
                {
                    maxi = max(maxi, vec[k]);
                    mini = min(mini, vec[k]);
                }
            }
            int beauty = maxi - mini;
            total_beauty = total_beauty + beauty;
        }
    }
    return total_beauty;
}

int main()
{
    string s = "aaabc";
    int result = beautifulString(s);
    cout << result;
}