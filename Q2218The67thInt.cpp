#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        int y = x+1;
        if(x==67 ){
            cout<<67<<endl;
        }
        else if(x==-67){
            cout<<-67<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
    
    return 0;
}