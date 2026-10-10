#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string name;
        cin>>name;
        string target = "Timur";
        sort(target.begin(),target.end());
        sort(name.begin(),name.end());
        if(target == name && name.size()==5){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
} 