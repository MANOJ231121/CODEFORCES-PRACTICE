#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int count =1;  //assuming that 1 year if n become larger than k
    // int a;
    // int b;
    while(n<=k ){
         n = n*3;
         k= k*2;
         if(n<=k){
         count++;
         }
         else
         {
            break;
         }
         
        
        }
        cout<<count<<endl;
    return 0;
}