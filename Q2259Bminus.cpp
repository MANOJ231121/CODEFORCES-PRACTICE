// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> arr(n);
//         for (int i = 0; i < arr.size(); i++)
//         {
//             arr[i] = abs(arr[i] -2);
//             unordered_map<int,int>mpp;
//             int maximum =0;
//             for (int i = 0; i < arr.size(); i++)
//             {
//                 mpp[arr[i]]++;
//                 for(auto it:mpp){
//                     maximum = max(maximum,it.second);
//                 }
//                 cout<<maximum;
//                 /* code */
//             }
            

//             /* code */
//         }
        
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> arr(n);
//         vector<int> arr2;
//         for(int i = 0; i<arr.size();i++){
//             cin>>arr[i];
//              arr2.push_back( abs(arr[i]-2));

//         }
//         for (int i = 0; i < count; i++)
//         {
//             /* code */
//         }
        
        
//     }
// }
//     return 0;



#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            arr[i] = abs(arr[i] - 2);
        }
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }
        int maximum = 0;

        for (auto it : mpp) {
            maximum = max(maximum, it.second);
        }
        cout << maximum << endl;
    }

    return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         vector<int> arr2;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             if (arr[i] % 2 != 0) {
//                 arr2.push_back(1);
//             }
//             else if (arr[i] % 4 == 0) {
//                 arr2.push_back(0);
//             }
//             else {
//                 arr2.push_back(2);
//             }
//         }
//         unordered_map<int, int> mpp;
//         for (int i = 0; i < arr2.size(); i++) {
//             mpp[arr2[i]]++;
//         }
//         int maximum = 0;
//         for (auto it : mpp) {
//             maximum = max(maximum, it.second);
//         }
//         cout << maximum << endl;
//     }
//     return 0;
// }