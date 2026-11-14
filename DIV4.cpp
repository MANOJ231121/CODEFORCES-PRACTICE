// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int a, b,c;
// //         cin>>a>>b>>c;
// //         if(a == b && a==c && b ==c){
// //             cout<<"NO"<<endl;

// //         }
// //         else if(abs(a-b) ==1 && abs(b-c) == 1 && abs(a-c)==2){
// //             cout<<"YES"<<endl;
// //         } 
// //         else{
// //             cout<<"NO"<<endl;
// //         }
// //     }
    
// //     return 0;
// // }


// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     while (t--)
// //     {
// //         int n;
// //         cin>>n;
// //         string s;
// //         cin>>s;
// //         int count =0;
// //         if(s[0] == 'B'){
// //             count++;
// //         }
// //         for(int i =1; i<s.size();i++){
// //             if (s[i] == s[i-1]){
// //                 count++;
// //             }
// //         }
// //         cout<< count<<endl;
// //     }
    
// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
    
// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--)
// // {
// //     int n;
// //     cin>>n;
// //     vector<int>arr(n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin>>arr[i];
// //         /* code */
// //     }
    
// // }    return 0;
// // }





// //d
// // #include <bits/stdc++.h>
// // using namespace std;
// // def recursion
// // int main(){
// //     int t;
// //     cin>>t;
// //     while (t--)
// //     {
// //         int n;
// //         cin>>n;
// //         string s;
// //         cin>>s;
// //         int left =0;
// //         int right =s.size()-1;
// //         while(left>=right){
// //             if( s[left] != s[right] ){
// //                 int prev = right;
// //                 prev = prev -1;
// //                 s[right]= s[prev];
// //                 if(s[left] )
// //             }
// //         }
// //         /* code */
// //     }
    
// //     return 0;
// // }



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
//         for(int i =0; i< n;i++){
//             cin>>arr[i];
//         }
//         sort(arr.begin(),arr.end());
        
//         // for(int i =0;i<arr.size();i++){
//         //     int mid = 
//         // }
//         int left =0;
//         int right = arr.size()-1;
//         while(left < right){
//             int mid  = left+(right- left)/2;
//             int maxi = *max_element(arr.begin(),arr.end());
//             mid = 
//         }
//         /* code */
//     }
    
//     return 0;
// }


// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n;
// //         cin>>n;
// //         string s;
// //         cin>>s;
// //         int left =0;
// //         int count =0;
// //         int right =n-1;

// //         while (left < right){
// //             if( s[left] == s[right]){
// //                 left++;
// //                 right--;
// //             }
// //             else{
// //                char a = max(s[left],s[right]);
// //                char b = min(s[left],s[right]);
// //                for(int i=0;i<n;i++){
// //                 if(s[i]==a){
// //                     s[i]--;
// //                 }
// //                }
// //                count++;
// //                  left=0;
// //                  right= n-1;
// //             }
            

// //         }
// //         cout<<count<<endl;
        
        
        
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;




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
//         // unordered_map<int,int>mpp;
//         for(int i =0;i<n;i++){
//             cin>>arr[i];
//         }
//         // for(int i =0;i<arr.size();i++){
//         //      mpp[arr[i]]++;
//         // }
//         sort(arr.begin(),arr.end());
//         int left = 0;
//         int right = arr.size()-1;
//         vector<int>left,mid,right;
//         while(left<right){
//         int mid = left+(right-left)/2;
//         mid.push_back(arr[mid]);
//         }
        

//     }
      
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (auto &x : h) cin >> x;
        sort(h.begin(), h.end());

        vector<int> left, mid, right;
        long long k = 0;

        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && h[j] == h[i]) j++;
            int c = j - i;
            int v = h[i];

            k += min(c, 2);
            left.push_back(v);
            if (c >= 2) {
                right.push_back(v);
                for (int x = 0; x < c - 2; x++) mid.push_back(v);
            }
            i = j;
        }

        cout << k << "\n";
        for (int x : left) cout << x << " ";
        for (int x : mid) cout << x << " ";
        for (int i = (int)right.size() - 1; i >= 0; i--) cout << right[i] << " ";
        cout << "\n";
    }
    return 0;
}