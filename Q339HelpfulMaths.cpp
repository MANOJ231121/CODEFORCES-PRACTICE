// #include<vector>
// #include<string>
// #include<iostream>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     string n;
//     for (int i = 0; i < s.size(); i=i+2)
//     {
//         /* code */
//         cout<<s[i];
//         int k = s[i];
//          n= to_string(k);
//         for (int  i = 0; i < n.size(); i++)
//         {
//             for (int j = 0; j < n.size()-i-1; j++)
//             {
//                 if(n[j]>n[j+1]){
//                     swap(n[j],n[j+1]);
//                 }
//             }

//         }

//     }
//     cout<<n<<endl;

//     return 0;
// }

// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     string n;
//     cin >> n;
//     string s;
//     for (int i = 0; i < n.size(); i = i + 2)
//     {
//         // int k = n[i];
//         // n = to_string(k);
//         // for (int i = 0; i < n.size(); i++)
//         // {
//         //     for (int j = 0; j < n.size() - i - 1; j++)
//         //     {
//         //         if (n[j] > n[j + 1])
//         //         {
//         //             swap(n[j], n[j + 1]);
//         //         }
//         //     }
//         // }
//     }
//     cout <<n;

//     return 0;
// }


#include<string>
#include<iostream>
using namespace std;
int main(){
    string p;
    cin>>p;
    string n;
    for(int m =0;m<p.size();m=m+2){
        n  += p[m];
        // cout<<n;

        for (int i = 0; i < n.size(); i++)
        {
           for (int j = 0; j < n.size()-i-1; j++)
           {
            if(n[j]>n[j+1]){
                swap(n[j],n[j+1]);
            }
        }
        
    }
}
for(int i =0;i<n.size();i++){
    cout<<n[i];
    if(i!=n.size()-1){
        cout<<"+";
    }

}
    
    return 0;
}