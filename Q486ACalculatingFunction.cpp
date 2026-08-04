// #include<iostream>
// using namespace std;
// int main(){
//      long long n;
//     cin>>n;
//     long long  odd =0;
//     long  long even =0;
//     for (int i = 0; i <= n; i++)
//     {
//         if(i%2 !=0){
//             odd = odd+i;
//         }
//         else if (i%2 ==0)
//         {
//             even = even+i;
//         }
        
//     }
//     cout<<((-(odd))+(even))<<endl;
    
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    long long  n;
    cin>>n;
    if (n%2 ==0)
    {
        cout<< (n/2)<<endl;
    }
    else{
        cout<<-((n+1)/2)<<endl;
    }
    
    return 0;
}