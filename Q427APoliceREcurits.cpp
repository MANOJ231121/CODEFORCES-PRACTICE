// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     int count = 0;
// //     vector<int> arr(t);
// //     for (int i = 0; i < t; i++)
// //     {
// //         cin>>arr[i];
// //         /* code */
// //     }
// //     int left =0;
// //     int right = left+1;
// //     while(right<arr.size()){
// //         if((arr[left]<arr[right])|| (arr[left] ==arr[right]&& (arr[left]<0 && arr[right]<0))){
// //             count = count+1;
// //             left++;
// //             right++;
// //         }
// //         else{
// //             if(arr[left]>arr[right] ||(arr[left] ==arr[right]&& (arr[left]>0 && arr[right]>0))){
// //                 left++;
// //                 right++;
// //             }
// //     }
// //     else{
// //             if((arr[left]<arr[right])|| (arr[left] ==arr[right]&& (arr[left]<0 && arr[right]<0))){
// //             count = count+1;
// //             left++;
// //             right++;
// //         }

// //     }
// //     cout<<count<<endl;
    
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int count =0;
//     vector<int> arr(t);
//     for (int i = 0; i < t; i++)
//     {
//         cin>>arr[i];
//         /* code */
//     }
//     int i = 0;
//     int j = 1;
//     while (j<arr.size()){
//         if(arr[i]>arr[j]){
//             i= i+2;
//             j= j+2;
//         }
//         else{
//             count =count+1;
//             i++;
//             j++;
//         }
//     }
//     cout<<count<<endl;
    
    
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    int police =0;
    int count =0;
    for(int i =0;i<t;i++){
        cin>>arr[i];
    }
    for(int i =0;i<t;i++){
        if(arr[i]>0){
            police += arr[i];
        }
        else{
            if(police>0){
                police --;
            }
            else{
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}


