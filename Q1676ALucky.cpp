// A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

// Input
// The first line of the input contains an integer t
//  (1≤t≤103
// ) — the number of testcases.

// The description of each test consists of one line containing one string consisting of six digits.

// Output
// Output t
//  lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
// 5
// 213132
// 973894
// 045207
// 000000
// 055776

// #include<vector>
// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> array(6);
//     for (int i = 0; i < n; i++)
//     {
        
//         // if (array[0]+ array[1]+array[2] == array[3]+array[4]+array[5])
//         // {
//             //     cout<<"Yes"<<endl;
//             // }
//             // else{
//                 //     cout<<"NO"<<endl;
//                 // }
                
//             }
    
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int s;
//     while (n--)
//     {
//         /* code */
//         cin>>s;
//         int remainder = s%10000;
//     }
    
//     return 0;
// }


// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     int n= 123321;
//     int k = n;
//     n = n/1000;
//     int s = k%1000;
//     cout<<n<<endl;
//     cout<<s;
//     // n = n%1000;
//     // int s = 1000%123321;
//     // cout<<n<<endl;
//     // cout<<s<<endl;
//     // string s= to_string(n);
//     // for (int i = 0; i < s.size(); i++)
//     // {
//     // }
//     // cout<<s[4]+s[5]<<endl;
    

//     return 0;
// }



#include<string>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    while (n--)
    {
        cin>> s;
        if((s[0]-'0')+(s[1]-'0')+(s[2]-'0')==(s[3]-'0')+(s[4]-'0')+(s[5]-'0')){
            cout<<  "YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}



// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     int n= 123;
//     string s = to_string(n);
//     for (int i = 0; i <s.size() ; i++)
//     {
//          s[0] = int(s[0]);
//          s[1] =  int (s[1]);

//          cout<<s[0]+s[1];
//     }
    
//     return 0;
// }




// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     string s = "11";
//     cout<<s[0]+s[1];
//     return 0;
// }