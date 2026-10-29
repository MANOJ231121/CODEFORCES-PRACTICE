#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        for (int i = 0; i < s.size(); i++)
        {
            mpp1[s[i]]++;
            /* code */
        }
        for (int i = 0; i < t.size(); i++)
        {
            mpp2[t[i]]++;
            /* code */
        }
        if(mpp1 == mpp2){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
        
    }
    return 0;
}