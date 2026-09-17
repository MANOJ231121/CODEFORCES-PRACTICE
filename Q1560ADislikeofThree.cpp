#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if((n %3 != 0) && (n%10 != 3)){
            cout<<n<<endl;
        }
        else if((n%3 == 0)&& (n%10 ==3)){
            n++;   
            cout<<n<<endl;
            }
        }    
    return 0;
}