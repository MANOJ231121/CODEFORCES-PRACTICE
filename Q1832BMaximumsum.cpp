#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        vector<int> arr2 ;
        arr2 = arr;
        auto it = min_element(arr.begin(),arr.end());
        arr.erase(it);
        it = min_element(arr.begin(),arr.end());
        arr.erase(it);
        int sum1 =0;
        for (int i = 0; i <arr.size(); i++)
        {
            sum1 = sum1+arr[i];
        }
        auto it2 = max_element(arr2.begin(),arr2.end());
        arr2.erase(it2);
        int sum2 =0;
        for (int i = 0; i < arr2.size(); i++)
        {
            sum2 = sum2+arr2[i];
        }
        if(sum1>sum2){
            cout<<sum1<<endl;
        }
        else{
            cout<<sum2<<endl;
        }
        
    }
    
    
    return 0;
}