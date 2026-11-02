#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int round = x+y+z;
        if(y>=z){
            cout<<string(round,'R')<<endl;
        }
        else if(z>=x){
                cout<<string(round,'S')<<endl;
            }
        
        else{
            cout<<string(round,'P')<<endl;
        }

        /* code */
    }
    
    return 0;
}