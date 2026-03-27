#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> arr = {0, 2, 1, 2, 0, 1, 1};
    int L = 0;
    int M = 0;
    int H = arr.size() - 1;
    while (M <= H)
    {
        if (arr[M] == 0)
        {
            swap(arr[M], arr[L]);
            L++, M++;
        }
        else if (arr[M] == 1)
        {
            M++;
        }
        else
        {
            swap(arr[M], arr[H]);
            H--;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
}