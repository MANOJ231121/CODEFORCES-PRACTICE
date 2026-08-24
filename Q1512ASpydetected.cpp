// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int s;
//     int freq[100] = {0};
//     while (n--)
//     {
//         cin >> s;
//     }
//     vector<int> arr(s);
//     for (int i = 0; i <= arr.size(); i++)
//     {
//         cin >> arr[i];
//         freq[arr[i]]++;
//     }
//     int unique;
//     for (int i = 1; i < 100; i++)
//     {
//         /* code */
//         if (freq[i] == 1)
//         {
//             unique = i;
//         }
//         for (int k = 0; k < arr.size(); i++)
//         {
//             if (arr[k] == unique)
//             {
//                 cout << k + 1 << endl;
//                 break;
//             }
//         }
//     }
//         return 0;
//     }

// #include <vector>
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int n;
//     while (t--)
//     {
//         int freq[101]={0};
//         cin>>n;
//         vector<int> arr(n);
//         for (int i = 0; i < arr.size(); i++)
//         {
//             cin>>arr[i];
//             freq[arr[i]]++;

//         }
//         int unique;
//         for (int  j =  1; j < 100; j++)
//         {
//             if(freq[j]== 1){
//                 unique =j;
//                 break;
//             }
//             }
//             for (int k = 0; k < arr.size(); k++)
//             {
//                 /* code */
//                 if(arr[k]==unique){
//                     cout<<k+1<<endl;
//                     break;
//                 }
//             }
            
           
        
        
//     }
    
//     return 0;
// }
#include <vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        int freq[101] = {0};
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < arr.size(); i++)
        {
            /* code */
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int unique;
        for (int i = 0; i < 101; i++)
        {
            if(freq[i]==1){
                unique =i;
                break;
            }
        }
        for (int j = 0; j < arr.size(); j++)
        {
           if( arr[j] == unique){
            cout<<j+1<<endl;
            break;
           }
            /* code */
        }
        
        
        
    }
    return 0;
}