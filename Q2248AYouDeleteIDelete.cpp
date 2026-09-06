// Alice and Bob are given a binary string∗
//  s
//  of length n
// . It contains at least one 0
//  and at least one 1
// .

// They each perform exactly one operation in the following order:
// First, Alice chooses an occurrence of 0
//  in s
//  and deletes it.
// Then, Bob chooses an occurrence of 1
//  in the resulting string and deletes it.
// Alice wants the final string to be lexicographically†
//  as large as possible, while Bob wants it to be lexicographically as small as possible. Determine the final string if both players act optimally.

// ∗
// A binary string is a string consisting only of the characters 0
//  and 1
// .

// †
// For two distinct binary strings a
//  and b
//  of the same length, a
//  is lexicographically smaller than b
//  if, at the first position where they differ, a
//  has the smaller digit.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤100
// ). The description of the test cases follows.

// The only line of each test case contains a binary string s
//  of length n
//  (3≤n≤100
// ).

// It is guaranteed that s
//  contains at least one 0
//  and at least one 1
// .
// #include <vector>
// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n; 
//     string s;
//     vector<vector<int>> array(n, vector<int>(1));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 1; j++)
//         {

//             cin >> array[i][j];
//             s = to_string(array[i][j]);
//         }
//     }
//         for (int j = 0; j < s.size(); j++)
//         {
//             if (s[j] == '0' || s[j - 1] == '0')
//             {
//                 int pos = s.find('0');

//                 if (pos != string::npos)
//                 {
//                     s.erase(pos, 1);
//                 }
//                 for (int k = 0; k <s.size(); k++)
//                 {
//                     if (s[j] == '1' || s[j - 1] == '1')
//             {
//                 int pos1 = s.find('1');

//                 if (pos1 != string::npos)
//                 {
//                     s.erase(pos1, 1);
//                 }
                    
//                 }
                
//             }
//         }
//     }    

        
//     cout<<s<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    
    return 0;
}