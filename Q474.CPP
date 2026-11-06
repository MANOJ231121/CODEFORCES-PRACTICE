// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char s;
//     cin>>s;
//     string n;
//     cin>>n;
//     char ans; 
//     vector<string>arr(n.size);
//     string given = "qwertyuiopasdfghjkl;zxcvbnm,./";
//     if(s =='R'){
//         for(int i = 0;i<n.size();i++){
//             for(int j = 0;j<given.size();j++){
//            if(s[i]== given[j]){
//             ans =   given[j]-1;
//             arr.push_back(ans);

//            }
//         }
//     }
//     cout<<ans<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    char n;
    cin>>n;
    string s;
    cin>>s;
    string ans ="";
    // vector<string> arr;
    string given ="qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i =0;i<s.size();i++){
        for(int j =0;j<given.size();j++){
            if(s[i]== given[j])
            {
                if(n =='R'){
                    ans = ans + given[j-1];
                }
                else if( n=='L'){
                    ans = ans + given[j+1];
                }
                else
                { return 0;
                }
                }
        }
    }
    cout<<ans<<endl;
    return 0;
}