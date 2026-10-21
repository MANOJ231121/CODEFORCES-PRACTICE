// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     vector<string> arr(t);
//     while(t--){
//         string s;
//         cin>>s;
//         arr.push_back(s);
//     }
//     unordered_map<string,int>mpp;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int count =0;
//         mpp[arr[i]]++;
//         for(auto found :mpp){
//             if (found.second ==1){
//                 cout<<"OK"<<endl;
//                 count =count+1;
//             }

//             else if(found.second !=0){
//                 cout<< found.first + count;
//                 count =count+1;
//             }
//         }
//     }

    // int left =0;
    // int right = left+1;
    // while(right<mpp.size()){
    //     for (auto it:mpp)
    //     if(it.first[left] != it.first[right]){
    //         cout<<"OK"<<endl;
    //         right++;
    //     }
    //     else if((it.first[left] == it.first[right])){
    //         cout<<it.first[left]+"1"<<endl;
    //     }
    //     left++;
    //     right++;
        
    // }
    // for(auto found : mpp){
    //     if()
//     // }
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<string,int>mpp;
    while (t--)
    {
        string s;
        cin>>s;
        int count =mpp[s];
        if(mpp[s]==0){
            cout<<"OK"<<endl;
            count =count+1;
        } 
        else if(mpp[s]!=0){
            cout<< s+to_string(count)<<endl;
            count =count+1;
        }
        mpp[s]++;
    }
    
    return 0;
}