#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int count =0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    sort(arr.begin(),arr.end());
    int sum =0;
    for(int i =0;i<arr.size();i++){
        sum = sum+arr[i];
        if(sum>t){
            break;    
        }
        count++;
    }
    cout << count;
    

    return 0;
}