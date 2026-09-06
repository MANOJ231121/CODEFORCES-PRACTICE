

// code to write table of any number
// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     int count =10;
//     cout<<"enter the table number : ";
//     cin>>num;
//     for (int i = 1; i <= count; i++)
//     {
//         /* code */
//         cout<<num*i<<endl;
//     }

// }
// Take two integers as input and print their sum, difference, product, and quotient.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a =2, b = 4;
//     int c= a+b;
//     int d= a-b;
//     int e = a*b;

// }
// code for primenumbers
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     if (a<=1){
//             cout<<"not a prime number";
//             return 0;
//         }
//         for (int i =2;i*i<=a;i++){
//             if (a%i==0){
//                 cout<<" not prime";
//             }
//         }
//         cout<<"prime";
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 2;
//     int *ptr = &a;
//     cout<<ptr;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>> a;
//     if(a%2==0 && a>2){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }

// code forces question
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int line;
//     // int count =0;
//     cin >> line;
//     string words;
//     for (int i = 0; i < line; i++)
//     {
//         int count = 0;
//         cin >> words;
//         if (words.size() > 10)
//         {
//             for (int j = 1; j < words.size() - 1; j++)
//             {
//                 count++;
//             }

//             cout << words[0];
//             cout << count;
//             cout << words.back();
//         }
//         else
//         {
//             /* code */
//             cout << words << endl;
//         }
//     }

//     return 0;
// }

// // #include<iostream>
// // #include<string>
// // using namespace std;
// // int main(){
// //     string name = "manoj";
// //     int count =0;
// //     for (int i =0; i<name.size();i++){
// //         count++;
// //     }
// //     cout<<count;

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int line ;
// //     string word;
// //     cin>>line;
// //     for (int i = 0; i < line ; i++)
// //     {
// //         cin>>word;

// //     }
// //     return 0;
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main() {
// //     int line;
// //     cin >> line;

// //     for (int i = 0; i < line; i++) {
// //         string word;
// //         cin >> word;

// //         if (word.size() > 10) {
// //             cout << word[0]
// //                  << word.size() - 2
// //                  << word[word.size() - 1]
// //                  << endl;
// //         } else {
// //             cout << word << endl;
// //         }
// //     }

// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// bool palindrome(int x){
//     int y;
//     y=x;
//    while (y>0)
//    {
//     /* code */
//     cout<<y % 10;
//     y=y/10;
//     cout<<y;
//    }

// }
// int main(){
//     int x=121;
//     cout<<palindrome(x);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// bool palindrome(int x) {
//     int original = x;
//     int rev = 0;

//     while (x > 0) {
//         int digit = x % 10;
//         rev = rev * 10 + digit;
//         x = x / 10;
//     }

//     return original == rev;
// }

// int main() {
//     int x = 121;

//     if (palindrome(x))
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//  int n;
//  cin >> n;
//  int r= n%3;
// int q = n/3;
// while (n>=0)
// {
//     /* code */
//     if (r==0)
//     {
//         /* code */
//         break;
//     }
//     else if (r==1)
//     {
//         /* code */

//     }

// }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     while(num>=0){
//         if(num==1){
//             break;
//         }
//         else if (num%2==0)
//         {
//             /* code */num=num/2;
//         }
//         else if (num%2!=0)
//         {
//             /* code */
//             num =num*3+1;
//         }
//         cout <<num<<" ";

//     }
//     return 0;
// }
// if n=6
// output - 6 3 10 5 16 8 4 2 1

// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     string l;
//     cin>>l;
//     int unique=0;

//     for (int i = 0; i < l.size(); i++)
//     {
//         int count =0;
//        for (int j = 0; j< l.size(); j++)
//        {
//         if(l[i]==l[j]){
//             // cout<<count<<endl;
//             count ++;
//         }
//         if(count ==1){
//             unique++;
//         }
//        }

//     }
//     cout<<unique;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int count ;
//     if(a<=1){
//         cout<<"not a prime number"<<endl;
//     }
//     else{
//         for(int i=0;i*i<a;i++){
//             if(a%i==0){
//                 count++;
//                 cout<<count<<endl;
//             }
//         }
//     }
//     return 0;
// }

// simple sieve algorithm

// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin >>a;
//     string n;
//     int count=0;
//     for(int i =0; i<a;i++){
//         cin>>n;
//         if(n.size()==4){
//             cout<<n;
//         }
//         else{
//             count++;

//         }

//         cout<<n[0]<<count<<n.back()<<endl;
//     }
//     return 0;
// }

// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     string word;
//     int count = 0;
//     for (int i = 0; i < a; i++)
//     {
//         cin >> word;
//         if (word.size() > 10)
//         {
//             for (int j = 1; j < word.size() - 1; j++)
//             {
//                 count++;
//             }
//                 cout << word[0];
//                 cout << count;
//                 cout << word.back()<<endl;
//         }
//         else
//         {
//             cout << word<<endl;
//         }
//     }

//     return 0;
// }

// code forces question
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int line;
//     // int count =0;
//     cin >> line;
//     string words;
//     for (int i = 0; i < line; i++)
//     {
//         int count = 0;
//         cin >> words;
//         if (words.size() > 10)
//         {
//             for (int j = 1; j < words.size() - 1; j++)
//             {
//                 count++;
//             }

//             cout << words[0];
//             cout << count;
//             cout << words.back();
//         }
//         else
//         {
//             /* code */
//             cout << words << endl;
//         }
//     }

//     return 0;
// }

// #include <vector>
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int count =0;
//      vector<vector<int>> array(a,vector<int>(3));
//      for (int i = 0; i < a; i++)
//      {
//         for (int j = 0; j < 3; j++)
//         {
//             cin>>array[i][j];
//         }
//             if( array[i][0]+ array[i][1]+array[i][2]>=2){
//                 count++;

//             }
        
        
//     }
//     cout<<count<<endl;
     
    
//     return 0;
// }
// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int x=0;
//     string b;
//     for(int i=0;i<a;i++){
//         cin>>b;
//         if (b=="x++")
//         {
//             /* code */
//             x++;
//         }
//         if(b=="x--"){
//             x--;
//         }
//          if(b=="++x"){
//             ++x;
//         }
//          if(b=="--x"){
//             --x;
//         }
//     }
//     cout<<a<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     n++;
//     cout<<n;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int c=2;
    int num = m*n/c;
    cout<<num<<endl;


    return 0;
}