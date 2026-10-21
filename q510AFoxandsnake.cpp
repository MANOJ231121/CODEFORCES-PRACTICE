// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j<m; j++)
//         {
//             if(i%2 !=0){
//                 cout<<".";
//                 if(j==m){
//                     cout<<"#";
//                 }
//                 else if(i%4 !=0){
//                     cout<<".";
//                     if(j  == 0){
//                         cout<<"#";
//                     }
//                 }
//             }
//             else{
//                 cout<<"#";
//             }
//             /* code */
//         }
//         cout<<endl;
        
//         /* code */
//     }
    


//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                cout << "#";
            }
            else if (i % 4 == 1) {
                if (j == m - 1) {
                    cout << "#";
                }
                else {
                    cout << ".";
                }
            }
            else {
                if (j == 0) {
                    cout << "#";
                }
                else {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    return 0;
}

