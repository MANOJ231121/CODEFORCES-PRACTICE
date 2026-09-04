#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long a,k;
        cin>>a,k;
        int r = abs(a-k);
        long ans = r/10;
        if(r%10 !=0){
            ans++;
        }
        cout<<ans;
    }
    return 0;
}