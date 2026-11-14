// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<long> horse(4);
//     for(int i =0;i< 4;i++){
//         cin>>horse[i];
//     }
//     int left =0;
//     int right =left+1;
//     int count =0;
//     sort(horse.begin(),horse.end());
//     while(left < horse.size()){
//         if(horse[left] == horse[right]){
//             count ++;
//             right++;
//         }
//         else{
//             right++;
//         }
//         left++;
//     }
//     cout<<count<<endl;


//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<long> arr(4);
    set <long> s;
    for (int i = 0; i < 4; i++)
    {
        cin>>arr[i];
        /* code */
    }
    for(int i =0; i<4;i++){
    s.insert(arr[i]);
    }
    cout<<4-s.size()<<endl;
    
    return 0;
}