// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int left =0;
//     int right = 0;
//     while(right<s.size()){
//         if(s.size()!=3){
//             right++;
//         }
//         if(s[right- left] =="WUB"){
//             s[right-left] =' ';
//         }
//         if (s[right - left]  != "WUB")
//         {
//             left ++;
//         }
//         right++;
        
//     }
//     cout<<s;
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";
    
    for (int i = 0; i < s.size();) {
        if (s.substr(i, 3) == "WUB") {
            result += ' ';
            i += 3;
        } else {
            result += s[i];
            i++;
        }
    }
    stringstream ss(result);
    string word;
    while (ss >> word) {
        cout << word << " ";
    }
    return 0;
}