//brute force approach
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//             /* code */
//         }
//         int count= 0;
//         int i =0;
//         while (i<arr.size()){
//             int j= i+1;
//             while (j<arr.size())
//             {
            
                
//                 if(i<j && arr[j]-arr[i]== j-i){
//                     count +=1;
//                 }
//                 j++;
                
//             }
//             i++;

           
//         }
//         cout<<count<<endl;
        
//     }
    
//     return 0;
// }



// optimal approach using hashmap
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        // vector<int>arr2;
        unordered_map<int,long long>mpp;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            mpp[arr[i]-i]++;
            /* code */
        }
        long long c =0;
        for(auto count:mpp){
            long long a = (count.second*(count.second-1))/2;
            c +=a;
            
        }
        cout<<c<<endl;
    }
    
    return 0;
}