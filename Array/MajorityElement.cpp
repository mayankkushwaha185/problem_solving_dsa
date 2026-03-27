#include <iostream>
using namespace std;
#include <vector>

vector<int> majorityElement(vector<int> &nums)
{
    int count1 = 0, cand1 = 0;
    int count2 = 0, cand2 = 0;
    for (int x : nums)
    {
        if (x == cand1)
        {
            count1++;
        }
        else if (x == cand2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            cand1 = x;
            count1++;
        }
        else if (count2 == 0)
        {
            cand2 = x;
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for (int x : nums)
    {
        if (x == cand1)
        {
            count1++;
        }
        else if (x == cand2)
        {
            count2++;
        }
    }
    cout << count1 << endl;
    cout << count2 << endl;

    vector<int> ans;
    int n = nums.size();
    if (count1 > n / 3)
        ans.push_back(cand1);
    if (count2 > n / 3)
        ans.push_back(cand2);

    return ans;
}

int main()
{
    vector<int> v = {1, 1, 1, 2, 2, 3, 4, 4, 4, 4, 1};
    vector<int> result = majorityElement(v);
    majorityElement(v);
    for (auto k : result)
    {
        cout << k;
    }
}