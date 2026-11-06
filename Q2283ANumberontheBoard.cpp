// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     int t;
// // //     cin>>t;
// // //     while (t--)
// // //     {
// // //         int l,r;
// // //         cin>>l>>r;
// // //         if(l ==0 & r ==0){
// // //             cout<<0<<endl;
// // //             for (int i = l; i < r; i++)
// // //             {
// // //                 vector<int>arr;
// // //                 cin>>arr[i];

// // //                 /* code */
// // //             }
// // //             int left =0;
// // //             int right =arr.size()-1;
// // //             int sum =0;
// // //             while(left< right){
// // //                 if(arr[left]+ arr[right] == 0){
// // //                    arr.erase(arr[left],arr[right]);
// // //                 }
// // //                 else if(arr[left]+ arr[right] != 0){
// // //                     right++;
// // //                 }
// // //                 left++;
// // //             }
// // //             for(int i =0; i<arr.size();i++){
// // //                 cout<<arr[i]<<endl;
// // //             }
// // //     }
    
// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int l, r;
// //         cin >> l >> r;

// //         if (l <= 0 && r >= 0) {
// //             cout << 0 << '\n';
// //         }
// //         else if (l > 0) {
// //             cout << r - l << '\n';
// //         }
// //         else {
// //             cout << r - l << '\n';
// //         }
// //     }

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// int t;
// cin >> t;
// while (t--) {
//     int l, r;
//     cin >> l >> r;
//     int n = r-l+1;

//     int sum =(l+r)*n/2;

//     if (sum == 0) {
//         cout << 0 << '\n';
//     }
//     else {
//         cout << r - l << '\n';
//     }
// }

// return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int l, r;
//         cin >> l >> r;

//         int n = r - l + 1;
//         int sum = (l + r) * n / 2;

//         if (sum == 0) {
//             cout << 0 <<endl;
//         }
//         else if (l > 0) {
//             cout << r - l <<endl;
//         }
//         else if (r < 0) {
//             cout << l-r<< endl;
//         }
//         else {
//             cout << min(abs(l), abs(r)) << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long n = r - l + 1;
        long long sum = (l + r) * n / 2;

        if (sum >= l && sum <= r) {
            cout << 0 << endl;
        }
        else if (l > 0 || r < 0) {
            cout << n - 1 << endl;
        }
        else {
            long long k = min(-l, r);
            cout << n - (2 * k + 2) << endl;
        }
    }

    return 0;
}