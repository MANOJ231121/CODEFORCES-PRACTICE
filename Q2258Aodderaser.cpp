// #include <numeric>
// #include<algorithm>
// #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int n;
//     int even =0;
//     int odd =0;
//     while (t--)
//     {
//         cin>>n;
//         vector<int> arr(n);
//         vector<int>arr2(n);
//         for (int i = 0; i < arr.size(); i++)
//         {
//             cin>>arr[i];
//             if(arr[i]%2 ==0){
//                 even ++;
//             }
//             else{
//                 odd++;
//             }
//         }
//         if(even>odd){
//             for (int i = 0; i < arr.size(); i++)
//             {
//                 if(arr[i]%2==0){
//                     arr2.push_back(arr[i]);
//                 }
//             }
//             int g = 0;
//         for (int x : arr2) {
//             g = gcd(g, x);
//         }
//         cout<<g<<endl;
            
//         }
//         else if (even < odd)
//         {
//             for (int i = 0; i < arr.size(); i++)
//             {
//                 if(arr[i]%2 != 0){
//                     arr2.push_back(arr[i]);
//                 }
//             }
//                 int g = 0;
//         for (int x : arr2) {
//             g = gcd(g, x);
//         }
//         cout<<g<<endl;
//                 /* code */
//         }
//         else if(even == odd){
//             for (int  i = 0; i < arr.size(); i++)
//             {
//                 arr2.push_back(arr[i]);
    
//             }
            
//                 int g = 0;
//         for (int x : arr2) {
//             g = gcd(g, x);
//         }
//         cout<<g<<endl;
        
//     }
// }
//     return 0;
// }
        

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (n == 1) {
            cout << a[0] << endl;
        } else {
            cout << gcd(a[0], a[n - 1]) <<endl;
        }
    }
    return 0;
}











        //     if(arr[i]%2==0){
        //         arr2.push_back(arr[i]);
        //     }
        // }
        // int g = 0;
        // for (int x : arr2) {
        //     g = gcd(g, x);
        // }
        // cout<<g<<endl;

        
        /* code */
        
    
    


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<long long> a(n);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         long long odd = 0;
//         long long even = 0;

//         for (int i = 0; i < n; i++) {
//             if (i % 2 == 0)
//                 odd = gcd(odd, a[i]);
//             else
//                 even = gcd(even, a[i]);
//         }

//         cout << max(odd, even) << '\n';
//     }

//     return 0;
// }