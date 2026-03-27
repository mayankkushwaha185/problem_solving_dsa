#include <iostream>
using namespace std;
#include <vector>
void printVec(vector<int> &vec)
{
    cout << "size of: " << vec.size() << " " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cout << "Enter N :";
    cin >> N;
    vector<vector<int>> v;

    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter n: ";
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "Enter x: ";
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cout << "Enter n: ";
    //     cin >> n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cout << "Enter x: ";
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     printVec(v[i]);
    // }
    // cout << v[0][0];
}