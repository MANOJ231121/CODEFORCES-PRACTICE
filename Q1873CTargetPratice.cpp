// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int sum =0;
//     while (t--)
//     {
//         string s;
//         cin>> s;
//         for(int i= 0; i<10;i++){
//             if(s[i]!='.'){
//                 sum = sum + i;
//             }
//         }
//         cout<<sum;
//         /* code */
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum =0;
    int t;
    cin>>t;
    while(t--){
    vector<vector<char>>arr(10,vector<char>(10));
    for(int row = 0 ;row<10;row++){
        for(int column =0 ;column<10;column++){
            cin>>arr[row][column];
            if(arr[row][column]=='X'){
                int dist =min({row,column,9-row,9-column});
                sum = sum + dist +1;
            }
        }
    }
    cout <<sum<<endl;
    sum = 0;
}
    return 0;
}