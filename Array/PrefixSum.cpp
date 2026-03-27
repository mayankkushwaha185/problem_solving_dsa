#include <iostream>
using namespace std;
#include <vector>

#include <map>
void prefixSum()
{
    vector<int> arr = {1, 2, 3, 4, 5, 8};
    int n = arr.size();
    vector<int> arr2;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        arr2.push_back(sum);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 5};

    map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[i] = arr[i];
    }
    vector<int> arr3(mp.size());

    for (auto it : mp)
    {
        // cout << "ifrst value: " << it.first << " index value: " << it.second << "" << endl;

        int index = it.first;
        int value = it.second;

        arr3[index] = value;
    }

    for (auto it = arr3.begin(); it != arr3.end(); ++it)
    {
        cout << *it << " ";
    }
    // prefixSum();
}