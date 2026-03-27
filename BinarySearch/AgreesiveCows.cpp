#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int isPossible(vector<int> &nums, int cows, int distance)
{
    int c = 1;
    int lastPostion = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if ((nums[i] - lastPostion) >= distance)
        {
            c++;
            lastPostion = nums[i];
        }
        if (cows == c)
        {
            return true;
        }
    }
    return false;
}
int AggressiveCow(vector<int> &nums, int cows)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int low = 1;
    int high = nums[n - 1] - nums[0];
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (isPossible(nums, cows, mid) == true)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> stall = {0, 3, 4, 7, 10, 9};
    int cows = 4;

    auto result = AggressiveCow(stall, cows);
    cout << result;
}