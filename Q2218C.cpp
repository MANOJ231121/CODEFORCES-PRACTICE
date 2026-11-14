// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int p = 3 *n;
//         vector<int>arr(p);
//        for(int i = 0;i<p;i++){
//         arr[i]=i+1;
//        }
//        sort(arr.begin(),arr.end());
//        for(int i =0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//     //    int median = (arr[0]+arr[arr.size()])/2+1;
//     }
    
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int k = 3 * n;

        for(int i = 1; i <= n; i++) {
            cout << i << " " << k-1 << " " << k << " ";
            k -= 2;
        }

        cout << endl;
    }

    return 0;
}