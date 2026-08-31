// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     int count = 1;
//     if(n%2==0){
//         cout<<count ;
//     }
//     else if (n%2 !=0)
//     {
//         cout<<count+1;
//         /* code */
//     }
    
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long n;
//     cin>>n;
//     int target ;
//     int count =1;
//     int prev =0;
//     for (int i = 1; i <n; i++)
//     {
//         if(n%2!=0){
//         if(i*i<n){
//             target =( n- (i*i));
//         }
//     }
//     else if (n%2 ==0)
//     {
//         /* code */
//         cout<<count;
//         break;
//     }
// }

//     cout<<count+target;
    

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long n;
//     cin>>n;
//     int count =0;
//     long bacteria=1;
//     while(bacteria<n){
//         bacteria=bacteria*2;
//         count++;
//     }
//     cout<<count;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    int count =0;
    while(n>0){
        if(n%2 !=0){
            count++;
        }
        n=n/2;
    }
    cout<<count<<endl;
    return 0;
}