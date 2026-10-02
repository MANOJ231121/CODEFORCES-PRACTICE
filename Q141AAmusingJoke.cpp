// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     unordered_map<char,int>mpp1;
//     unordered_map<char,int>mpp2;
//     vector<char>arr1;
//     vector<char>arr2;
//     vector<char>arr3;
//     string a ,b,c;
//     for(int i =0;i<a.size();i++){
//         arr1.push_back(a[i]);
//     }
//     for(int i =0;i<b.size();i++){
//         arr1.push_back(b[i]);
//     }

//     cin>>a>>b>>c;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string s = a+b;
    unordered_map<char,int> mpp1;
    for(int i = 0;i<s.size();i++){
        mpp1[s[i]]++;
    }
    unordered_map<char,int> mpp2;
    for(int i = 0;i<c.size();i++){
        mpp2[c[i]]++;
    }
    if(mpp1 == mpp2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // if(s.size()== c.size()){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO";
    // }
    return 0;
}