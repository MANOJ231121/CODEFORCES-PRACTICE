// #include<string>
// #include<algorithm>
// #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     vector<int> arr(n);
//     for (int  i = 0; i < arr.size(); i++)
//     {
//         cin>>arr[i];
//     }
    
//     for (int i = 0; i < arr.size()-1; i++)
//     {
//         int best =arr[0];
//         int worst =arr[0];
//         for (int j = 1; j < arr.size()-1; j++)
//         {
//             if(arr[j]>best || arr[j]>worst){
//                 count ++;
//                 best = arr[j];
//                 worst = arr[j];

//             }
//         }
        
//         /* code */
//     }
//     cout <<count <<endl;
    
    
    
    
//     return 0;
// }


// #include<string>
// #include<algorithm>
// #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count =0;
//     vector<int> arr(n);
//     for (int  i = 0; i < arr.size(); i++)
//     {
//         /* code */
//         cin>>arr[i];

//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//        bool greater = true;
//        bool smaller = true;
//        for (int j = 0; j < i; j++)
//        {
//         if(arr[i]>arr[j])
//         /* code */
//        }
       
//     }
//     cout<<count <<endl;
    
    
//     return 0;
// }

#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
        /* code */
    }
    int count =0;
    int best = arr[0];
    int worst = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>best){
            count ++;
            best = arr[i];

        }
        else if(arr[i]<worst){
            count++;
            worst = arr[i];

        }
        /* code */
    }
    cout<<count<<endl;
    
    
    return 0;
}


