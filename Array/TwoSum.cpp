#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int target = 80;
    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
        {
            cout << " Got it at i: " << i << "and at j: " << j;
            return 1;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "No match found";
    return 0;
}