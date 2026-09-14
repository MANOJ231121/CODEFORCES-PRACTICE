// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector <int> arr(n);
//     vector<int> ans(n);
//     for(int i = 0; i<n;i++){
//         cin>>arr[i];
//     }
//     for(int j =0;j<arr.size();j++){
//         ans[arr[j]-1]= j+1;
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<ans[i];
//         /* code */
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        ans[arr[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}