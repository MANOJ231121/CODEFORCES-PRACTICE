// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
        
//         vector<char>arr(5);
//         for ( int i = 0; i < 5; i++)
//         {
//             cin>>arr[i];
//             /* code */
//         }
//         int countA=0;
//         int countB=0;
//         for(int i =0;i<arr.size();i++){
//             if(arr[i]=='A'){
//                 countA++;
//             }
//             else{
//                 countB++;
//             }
//         }
//         if(countA>countB){
//             cout<<'A'<<endl;
//         }
//         else{
//             cout<<'B'<<endl;
//         }
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {        
        vector<char>arr(5);
        for(auto &z : arr){
            cin>>z;
        }
        unordered_map<char,int>mpp;
        for(int i =0;i<5;i++){
            mpp[arr[i]]++;
        }
        int m= INT_MIN;
        char ans;
        for(auto it : mpp){
            if(it.second>m){
                m = it.second;
                ans = it.first;
            }
            
        }
        cout<<ans<<endl;
    }
    
    return 0;
}