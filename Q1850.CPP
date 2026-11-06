#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int row =8,column =8;
    vector< vector<char>>arr(row,vector<char>(column));
    string ans = "";
    for(int i =0; i<8;i++){
        for (int j = 0; j< 8;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]!= '.'){
                ans = ans+arr[i][j];
            }
        }
        
    }
    cout<<ans<<endl;
}
    return 0;
}