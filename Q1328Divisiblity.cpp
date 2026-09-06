// You are given two positive integers a
//  and b
// . In one move you can increase a
//  by 1
//  (replace a
//  with a+1
// ). Your task is to find the minimum number of moves you need to do in order to make a
//  divisible by b
// . It is possible, that you have to make 0
//  moves, as a
//  is already divisible by b
// . You have to answer t
//  independent test cases.

// Input
// The first line of the input contains one integer t
//  (1≤t≤104
// ) — the number of test cases. Then t
//  test cases follow.

// The only line of the test case contains two integers a
//  and b
//  (1≤a,b≤109
// ).

// Output
// For each test case print the answer — the minimum number of moves you need to do in order to make a
//  divisible by b
// .
// 5
// 10 4
// 13 9
// 100 13
// 123 456
// 92 46
// 2
// 5
// 4
// 333
// 0

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1;
    int n2;
    int count ;
    while (n--)
    {
        /* code */
        cin>>n1>>n2;
        if(n1 %n2 !=0){
            int r = n1%n2;
            count = n2- r; 
        }
        else{
            count = 0;
        }
        cout<<count<<endl;
    }
    
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int n1;
//     int n2;
//     int count = 0;
//     while (n--)
//     {
//         cin >> n1 >> n2;
//         if (n1 % n2 != 0)
//         {
//             while (n1 % n2 != 0)
//             {
//                 int n3 =n1%n2;
//                 n1 =n1+ n3;
//                 count = n3;
//             }
//         }
//         else{
//             count =0;
//         }
//         cout << count << endl;
//         count =0;
//         }

//     return 0;
// }