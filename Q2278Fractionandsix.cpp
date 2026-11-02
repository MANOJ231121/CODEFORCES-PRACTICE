
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         string s, s2;
//         cin >> s >> s2;
//         string ans = "";
//         for (char ch : s) {
//             if (s2.find(ch) == string::npos) {
//                 ans +=ch;
//             }
//         }
//         sort(ans.begin(),ans.end());
//         if (ans =="isx") {
//             cout << "YES" << endl;
//         }
//         else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s1,s2;
        cin>>s1>>s2;
        s2 =s2+"six";
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1 == s2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}