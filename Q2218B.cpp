#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(7);
        for(int i =0;i<7;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int sum =0;
        for(int i =0;i<arr.size()-1;i++){
            sum =sum + (arr[i]* (-1));
        }
        sum = sum + arr[6];
        cout<<sum<<endl;
        sum =0;

    }
    return 0;
}