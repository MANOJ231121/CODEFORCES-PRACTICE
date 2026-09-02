// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int count =0;
//     while (t--)
//     {
//         /* code */
//         int n;
//         cin>>n;
//         string s;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>s[i];
//         }
//         for (int i = 0; i < s.size()-1; i++)
//         {
        
//             for (int j = s.size()-1; j >0; j--)
//             {
//                 if(s[i]!=s[j]){
//                 /* code */count++;
//                 }
//                 cout<<count<<endl;
//             }

            

//             /* code */
//         }
        
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int count =0;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         string s;
//         for (int i = 0; i < s.size(); i++)
//         {
//             cin>>s[i];
//             /* code */
//             if(s[i] != s[s.size()-i-1]){
//                 count++;
//             }
//             cout<<count<<endl;
//         }
        
//         /* code */
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count =0;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int i =0;
        int j = n-1;
        while (i<j &&s[i] != s[j])
        {
            i++;
            j--;
        }
        cout<<j-i+1<<endl;
    }
    
    return 0;
}
//fuck this question
