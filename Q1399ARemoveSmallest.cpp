// #include<string>
// #include<algorithm>
// #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int n;
//     while (t--)
//     {
//         /* code */
//         cin>>n;
//         vector<int> arr(n);
//         for (int i = 0; i < arr.size(); i++)
//         {
//             cin>>arr[i];
//             for (int j =arr.size()-1; j>0; j--)
//             {
//                 if((arr[i]-arr[j])<=1){
//                     i++;
//                 }
//                 if(arr.size()==1){
//                     cout<<"YES"<<endl;
//                 }
//                 else{
//                     cout<<"NO"<<endl;
//                     break;
//                 }

//             }

//         }

//     }

//     return 0;
// }

#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < arr.size(); i++)
        {
            /* code */
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        bool flag = true;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if ((arr[i] - arr[i + 1] > 1))
            {
              flag = false;
              break;
            }

            /* code */
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        /* code */
    }

    return 0;
}