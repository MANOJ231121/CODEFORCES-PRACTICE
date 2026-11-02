// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//             /* code */
//         }
//        for (int seat = 1; i < arr.size(); seat++)
//        {
//         bool visited = true;
//         if (visited[seat - 1] || visited[seat + 1] == false){
//             cout<<"No"<<endl;

//         }
//         else
//         {
//             cout<<"YES"<<endl;
//         }
        
//         /* code */
//        }
       
        
        
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
        int n,k;
        cin>>n>>k;
        if(n>k){
            cout<<k<<' '<<n<<endl;
        }
        else if(k>n){
            cout<<n<<' '<<k<<endl;
        }
        else{
            cout<<n<<' '<<k<<endl;
        }

        /* code */
    }
    
    return 0;
}