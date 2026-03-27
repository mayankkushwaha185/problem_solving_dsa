#include <iostream>
using namespace std;
#include <climits>
#include <vector>
#include <algorithm>

int main()
{
    vector<int> a = {10, 22, 12, 3, 0, 6};
    vector<int> leader;
    int maxi = INT_MIN;
    int n = a.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            leader.push_back(a[i]);
        }
        maxi = max(a[i], maxi);
    }
    // reverse(leader.begin(), leader.end());
    reverse(leader.begin(), leader.end());
    for (int x : leader)
    {
        cout << x << " ";
    }
    return 0;
}