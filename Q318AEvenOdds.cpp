// #include <string>
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main()
// {
//     long long n, k;
//     cin >> n >> k;

//     vector<long long> arr;

//     if ((n / 2) >= k)
//     {
//         for (long long i = 1; i <= n; i = i + 2)
//         {
//             arr.push_back(i);
//         }
//             cout<<arr[k-1];   
//     }
//     else{
//          for (long long i = 1; i <= n; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 arr.push_back(i);
//             }
//         }

//         cout << arr[k - (n / 2) - 1];
    
//     }
   
    

//     return 0;
// }

// #include <string>
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main()
// {
//     long long n, k;
//     cin >> n >> k;

//     vector<long long> arr;

//     long long odd = (n + 1) / 2;

//     if (k <= odd)
//     {

//         // for (long long i = 1; i <= n; i = i + 2)
//         // {
//         //     arr.push_back(i);
//         // }

//         // cout << arr[k - 1];
//     }
//     else
//     {
//         // for (long long i = 1; i <= n; i++)
//         // {
//         //     if (i % 2 == 0)
//         //     {
//         //         arr.push_back(i);
//         //     }
//         // }

//         cout << arr[k - odd - 1];
//     }

//     return 0;
// }

#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long odd = (n+1)/2;
    if(k<= odd){
        cout<<2*k-1;
    }
    else{
        cout<<2*(k -odd);
    }
    return 0;
}