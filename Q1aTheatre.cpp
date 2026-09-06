// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m, a;
//     int count = 0;
//     cin >> n >> m >> a;
//     // int count =0;
//     // case if there are uneven number of rows and column
//     if (n % a != 0)
//     {
//         int tlr = n - a;
//         n = n / a + tlr;
//         if (m % a != 0)
//         {
//             int tlc = m - a;
//             m = m / a + tlc;
//             count = (m * n) / (a * a);
//         }
//     }
//     else
//     {
//         if (n % a == 0)
//         {
//             if (m % a == 0)
//             {
//                 count = (m * n) / (a * a);
//             }
//         }
//     }
//     cout << count << endl;

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    long long n,m,a;
    cin>> n >>m>>a;
    long long rows = (n + a - 1) / a;
    long long cols = (m + a - 1) / a;
    cout<< rows*cols<<endl;

    return 0;
}