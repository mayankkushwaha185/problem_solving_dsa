#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

typedef pair<char, int> P;
string frequencySort(string &s)
{
    vector<P> vec(123);

    for (char &ch : s)
    {
        int freq = vec[ch].second;
        vec[ch] = {ch, freq + 1};
    }
    auto lambda = [&](P &p1, P &p2)
    {
        return p1.second > p2.second;
    };
    sort(begin(vec), end(vec), lambda);
    string result = "";

    for (int i = 0; i < 123; i++)
    {
        int freq = vec[i].second;
        char ch = vec[i].first;
        string temp = string(freq, ch);
        result = result + temp;
    }

    return result;
}

int main()
{
    string s = "papa";
    string result = frequencySort(s);

    cout << result;
}