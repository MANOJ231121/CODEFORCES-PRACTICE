// Dr. Bruce Banner hates his enemies (like others don't). As we all know, he can barely talk when he turns into the incredible Hulk. That's why he asked you to help him to express his feelings.

// Hulk likes the Inception so much, and like that his feelings are complicated. They have n layers. The first layer is hate, second one is love, third one is hate and so on...

// For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", and if n = 3 it's "I hate that I love that I hate it" and so on.

// Please help Dr. Banner.

// Input
// The only line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of layers of love and hate.

// Output
// Print Dr.Banner's feeling in one line.


// #include <string>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s1 = "I hate it" ;
//     string s2 ="I hate that I love it";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<s1<<" ";
//         for (int j = 0; j < i- 1; j++)
//         {
//             cout<<s2<<" ";
//         }
        
//     }
    
//     return 0;
// }





// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s1 = "I hate that";
//     string s2 = " I love that";
//     string s;
//     if(n>0){
//     for (int i = 0; i < n; i++)
//     {
//         if(i%2 ==0){
//            s = s+s1;
//         }
//         else{
//             s =s+s2;
//         }
//     }
// }
// string a = s;

// int pos = a.find_last_of(' ');

// a.erase(pos + 1);
// a+= "it";
// cout<<a<<endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n =3;
//     int a = 1;
//     int b =2;
//     for (int i = 0; i < n; i++)
//     {
//         if(n%2 == 0){
//              n =n/2;
//              cout<<a<<b;
//         }
//     }
    
//     return 0;
// }


// #include <string>
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     string s1 = "I hate that";
//     string s2 = "I love that";
//     string s;

//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) {
//             s = s + s1;
//         }
//         else {
//             s = s + s2;
//         }
//         s+=" ";
//     }

//     int pos = s.find_last_of(' ');

//     s.erase(pos + 1);
//     s += "it";

//     cout << s << endl;

//     return 0;
// }


#include <string>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s1 = "I hate that";
    string s2 = "I love that";
    string s;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            s += s1;
        }
        else {
            s += s2;
        }

        s += " ";
    }
    int pos = s.find_last_of(' ', s.length() - 2);
    s.erase(pos + 1);
    s += "it";

    cout << s << endl;

    return 0;
}