#include <iostream>
using namespace std;
#include <vector>
#include <unordered_set>

int longestConsecutive(vector<int> &nums)
{
    if (nums.empty() == 0)
        return 0;
    unordered_set<int> st(nums.begin(), nums.end());
    int longest = 0;

    for (int num : st)
    {
        if (st.find(num - 1) == st.end())
        {
            int current = num;
            int count = 1;

            while (st.find(current + 1) != st.end())
            {
                current + 1;
                count++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}
int main()
{
    vector<int> arr = {100, 200, 4, 3, 1, 2};
    cout << longestConsecutive(arr);
    return 0;
}