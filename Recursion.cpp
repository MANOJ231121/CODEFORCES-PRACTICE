// #include <bits/stdc++.h>
// using namespace std;
// void f(int i,int n){
//     string s = "manoj";
//     if(i>n){
//         return;
//     }
//     else{
//         cout<<s<<endl;
//         f(i+1,n);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     f(1,n);
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
 void f(int i){
    if(i<1){
        return;
    }
    else{
        cout<<i<<endl;
        f(i-1);
    }
}

int main(){
    int n;
    cin>>n;
    f(n); 
    return 0;
}