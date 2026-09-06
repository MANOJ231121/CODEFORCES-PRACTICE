// Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.
// Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.
// Input
// The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.
// Output
// In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).
// Examples
// InputCopy
// 47
// OutputCopy
// YES
// InputCopy
// 16
// OutputCopy
// YES
// InputCopy
// 78
// OutputCopy
// NO
// Note
// Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.
// In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.


// #include <string>
// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     for (int  i = 0; i < s.size(); i++)
//     {
//         // if(s[i]=='4' || s[i]=='7'){
//         //     cout<<"yes";
//         // }
//         // else{
//         //     cout<<"no";
//         // }
//         if(s[i]== '7' && s[i] =='4'){
//             cout <<"YES"<<endl;
//             break;
//         }
//     }
//      if (s)
//     {
//         /* code */
//     }
    
        
//         else{
//             cout<<"NO"<<endl;
//             break;

//         }
    
//     return 0;
// }


#include<set>
#include<string>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    s = to_string(n);
    set <char>st(s.begin(), s.end());
        if((st.count('4') && st.count('7')) ){
    cout << "YES"<<endl;
}
else if(n%4 == 0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
 
    return 0;
}