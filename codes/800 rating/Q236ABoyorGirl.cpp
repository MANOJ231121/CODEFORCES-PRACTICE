// #include <string>
// #include<iostream>
// using namespace std;
// int main(){
//     string n;
//     cin>> n;
//     int count;
//     for (int i = 0; i < n.size(); i++)
//     {
//         for(int j =0; j<n.size();j++){
//         /* code */
//         if(n[i]==n[i+1]){
//             break;

//         }
//         else if (n[i]!=n[i+1]){
//             count++;
//             break;
//             if(count%2==0){
//                 cout<<"CHAT WITH HER!"<<endl;
//             }
//             else{
//                 cout<<"IGNORE HIM!"<<endl;
//             }
//         }
//         }

//     }

//     return 0;
// }

#include <string>
#include <iostream>
using namespace std;
int main()
{
    string l;
    cin >> l;

    int count = 0;

    for (int i = 0; i <= l.size()-1; i++)
    {
        for (int j = 0; j < l.size(); j++)
        {
            if (l[i] == l[j])
            {

                count++;
                
            }
        }
    }
    cout<<count<<endl;
    // if (count % 2 == 0)
    // {
    //     cout << "CHAT WITH HER!" << endl;
    // }
    // else
    // {
    //     cout << "IGNORE HIM" << endl;
    // }

        return 0;
    }

    // #include <iostream>
    // #include <string>
    // using namespace std;

    // int main() {
    //     string l;
    //     cin >> l;

    //     int unique = 0;

    //     for (int i = 0; i < l.size(); i++) {
    //         int count = 0;

    //         for (int j = 0; j < l.size(); j++) {
    //             if (l[i] == l[j])
    //                 count++;
    //         }

    //         if (count == 1)
    //             unique++;
    //     }

    //     cout << unique;

    //     return 0;
    // }

    // #include<string>
    // #include<iostream>
    // using namespace std;
    // int main(){
    //     string name;
    //     cin>> name;
    //     bool found = false;
    //     int count=0;
    //     for(int i =0; i<name.size();i++){
    //        for (int j=0; j<name.size();j++){
    //         if(name[i]==name[j]){
    //            found = true;
    //            count++;
    //         }
    //        }
    //     }
    //     cout<<count<<endl;
    //     // if(count%2 ==0){

    //     // }
    //     return 0;
    // }