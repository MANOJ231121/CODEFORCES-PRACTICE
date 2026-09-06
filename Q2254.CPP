// Alice, Bob, and Charlie are playing a game with tokens. They start with a
// , b
// , and c
//  tokens, respectively.

// The game is played in rounds. Before the beginning of each round, they check the number of tokens everyone has:

// If any two players have the exact same number of tokens, the game immediately ends.
// // Otherwise, the round begins, all three players have a strictly different number of tokens. The player with the strictly most tokens gives exactly 1
// //  token to the player with the strictly fewest tokens.
// // Given the starting tokens a
// // , b
// // , and c
// // , determine exactly how many rounds the game will last before it ends.

// // Input
// // The first line contains a single integer t
// //  (1≤t≤103
// // ) — the number of test cases.

// // Each test case consists of a single line containing three integers a
// // , b
// // , and c
// //  (1≤a,b,c≤10
// // ).

// // Output
// // For each test case, output a single integer — the number of rounds the game will last before it ends.
// Example
// Input
// 6
// 1 2 3
// 4 6 1
// 3 3 7
// 1 7 10
// 6 1 9
// 1 1 1
// Output
// 1
// 2
// 0
// 3
// 3
// 0
// #include<algorithm>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a , b ,c;
//     int count =0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a>>b>>c;
//     }
//         for (int j = 0; j < n; j++)
//         {
        
//         if (a ==b || b ==c ||c==a)
//         {
//             cout<<0<<endl;
//             continue;
//         }
//         if (a !=b&& b!=c&&c!=a)
//         {
//             int largest = max({a,b,c});
//             int smallest = min({a,b,c});
//               if (a == largest) a = a - 1;
//             else if (b == largest) b = b - 1;
//             else c = c - 1;

//             if (a == smallest) a = a + 1;
//             else if (b == smallest) b = b + 1;
//             else c = c + 1;

//             count ++;
//         }
            
            
//         }
        
        
        
//         cout <<count<<endl;
    

//     return 0;
// }

// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int k;
//     string s;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> k;
//         cin >> s;
//         for (int j = 0; j < s.size()-1; j++)
//         {
//             if (s[j] == s[j - 1])
//             {
//                 size_t pos = s.find("s[j]");
//                 if (pos != string::npos)
//                 {
//                     s.erase(pos, 1);
//                 }
//             }
//         }
//     }
//     cout<<s.size()<<endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int count = 0;

        while (true)
        {
            if (a == b || b == c || c == a)
            {
                break;
            }

            int largest = max({a, b, c});
            int smallest = min({a, b, c});

            if (a == largest) a = a - 1;
            else if (b == largest) b = b - 1;
            else c = c - 1;

            if (a == smallest) a = a + 1;
            else if (b == smallest) b = b + 1;
            else c = c + 1;

            count++;
        }

        cout << count << endl;
    }

    return 0;
}