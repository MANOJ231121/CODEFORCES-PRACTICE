#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count  =0;
    while(t--){
    int  n, k;
    cin >>n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int> sorted = arr;
    sort(arr.begin(),arr.end());
    if(arr == sorted ||k>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    // for(int x:arr){
    //     cout<<x<<" ";
    // }
 

        
    cout<<endl;
}
    return 0;
}