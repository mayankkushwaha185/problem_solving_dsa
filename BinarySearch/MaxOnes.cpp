#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> &matrix, int n, int k)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (matrix[mid] >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int MaxOnes(vector<vector<int>> &matrix, int n, int m)
{
    int index = -1;
    int totalCount = 1;

    for (int i = 0; i < n; i++)
    {
        int count = m - lowerBound(matrix[i], n, 1);

        if (count > totalCount)
        {
            totalCount = count;
            index = i;
        }
    }
    return index;
}
// int MaxOnes(vector<vector<int>> &matrix, int n, int m)
// {
//     int index = -1;
//     int totalCount = 1;

//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < m; j++)
//         {
//             count = count + matrix[i][j];
//         }
//         if (count > totalCount)
//         {
//             totalCount = count;
//             index = i;
//         }
//     }
//     return index;
// }

int main()
{
    vector<vector<int>> matrix = {{1, 0, 0}, {1, 1, 1}, {1, 1, 1}};
    int n = 3, m = 3;
    int result = MaxOnes(matrix, n, m);
    cout << result;
}