#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> mpp;
    int maximum = 0;
    string answer;
    int t;
    cin >> t;
    vector<string> arr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > maximum)
        {
            maximum = it.second;
            answer = it.first;
        }
    }
    cout << answer;
    return 0;
}