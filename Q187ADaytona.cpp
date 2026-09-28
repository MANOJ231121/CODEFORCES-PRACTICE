#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool found = false;
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
            if (arr[i] == k){
                found = true;
            }
        }
        if(found != false){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}