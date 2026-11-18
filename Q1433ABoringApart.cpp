#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>arr={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    while(t--){
        int n;
        cin>>n;
        int sum =0;
        for(int i =0;i<arr.size();i++){
            string c = to_string(arr[i]);
           sum =sum +c.size();
            if(arr[i]==n){
                break;
            }
        }
        cout<<sum<<endl;

    }
    
    return 0;
}