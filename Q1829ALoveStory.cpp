#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count =0;
    while (t--)
    {
        string s;
        cin>>s;
        string target= "codeforces";

        for(int i =0;i <s.size();i++){
            if(s[i] !=target[i]){
                count++;

            }
        }
        cout<<count<<endl;
        count =0;
    }
    
    return 0;
}