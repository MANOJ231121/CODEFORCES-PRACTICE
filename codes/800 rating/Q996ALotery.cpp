// Allen has a LOT of money. He has n
//  dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1
// , 5
// , 10
// , 20
// , 100
// // . What is the minimum number of bills Allen could receive after withdrawing his entire balance?
#include<iostream>
using namespace std;
int main(){
    int count =0;
    int amount;
    cin>>amount;
    int n=5;
    int a[] ={100,20,10,5,1};
    for (int i = 0; i < n; i++)
    {
        
        int r = amount/a[i];
        count=count+r;
        amount =amount%a[i];      
    }
    cout<<count<<endl;
    
    
    return 0;
} 


// #include<iostream>
// using namespace std;
// int main(){
    
//     return 0;
// }