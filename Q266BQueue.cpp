#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'B'&& s[i+1]=='G'){
            s[i+1] = s[i];
            continue;
        }
        /* code */
    }
    cout<<s;
    
    
    return 0;
}