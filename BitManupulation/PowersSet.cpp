#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    int totalsubsets = 1 << n;

    for (int num = 0; num < totalsubsets; num++)
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            if (num & (1 << i))
            {
                subset.push_back(nums[i]);
            }
        }
        ans.push_back(subset);
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans = subsets(nums);

    for (auto subset : ans)
    {
        cout << "[ ";
        for (auto x : subset)
        {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}