#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i =0; i<t;i++){
        cin>>arr[i];
        }
    // for (int i =0;i<arr.size();i++){
        
    // }
    int x=0;
    int y =1;
    while(y<arr.size()){
        max(arr[x],arr[y]);
        
    }
    
    return 0;
}
