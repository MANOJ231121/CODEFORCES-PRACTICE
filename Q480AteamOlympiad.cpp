#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count =0;
    vector<int>arr(t);
    for(auto &x : arr){
        cin>>x;
    }
   unordered_map<int,vector<int>>mpp;
   for(int i =0; i<arr.size();i++){
    mpp[arr[i]].push_back(i+1);
   }
    if((mpp.find(1) == mpp.end())||
    (mpp.find(2) == mpp.end())||
    (mpp.find(3) == mpp.end())){
        cout<<0<<endl;
    }
    else{
        int team = min({mpp[1].size(),mpp[2].size(),mpp[3].size()});
        cout<<team<<endl;
        for(int i = 0; i < team; i++) {
            cout << mpp[1][i] << " "<< mpp[2][i] << " "<< mpp[3][i] << endl;
}        

   }
    

    
    return 0;
}