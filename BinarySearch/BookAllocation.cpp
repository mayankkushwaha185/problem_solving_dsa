#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int isPossible(vector<int> &nums, int student, int limit)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] + sum <= limit)
        {
            sum = nums[i] + sum;
        }
        else
        {
            count++;
            sum = nums[i];
            if (count > student)
            {
                return false;
            }
        }
    }
    return true;
}

int findPages(vector<int> &nums, int m)
{
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        cout << "low " << low << endl;
        cout << "high " << high << endl;
        if (isPossible(nums, m, mid) == true)
        {
            cout << "jab true " << mid << endl;
            ans = mid;
            high = mid - 1;
        }
        else
        {
            cout << "jab false " << mid << endl;
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int m = 2;
    int result = findPages(arr, m);
    cout << result;
    return 0;
}