// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//     vector<char> arr;
//     for(int i =0 ; i<1001;i++){
//         cin>>arr[i];
//     }
//     set<int>st(arr.begin(),arr.end());
//     cout<<st.size()-2;
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    set<char> st;
    getline(cin,s);
    for(char c :s){
        if(c != '{' && c !='}'&& c !=','&& c !=' '){
            st.insert(c);
        }
    }
    cout<<st.size();
    
    return 0;
}