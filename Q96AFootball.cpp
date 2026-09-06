// Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.
// input
// 001001


// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int count=1;
//     for (int i = 1; i <s.size(); i++)
//     {
//             if(s[i]==s[i-1]){
//                 count++;
//             }
//             else{
//                 count =1;
//             }
//     }
//     // cout<<count;
//     if((count)>=7){
//         cout<<"YES"<<endl;
//         return 0;
//     }
    
    
//     cout<<"NO"<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s ;
//     cin>>s;
//     int count=0;
//     int current =0;
//     int previous =0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i]==s[i+1])
//         {
//             current++;
//         }
//         for (int j = 0; j <i; j++)
//         {
//             /* code */
//             if(s[i] ==s[i+1])
//             previous++;

//         }
//         if(current = previous){
//             count++;
//         }
        
        
        
        
//     }
//     cout<<count<<endl;
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int count = 1;
    
//     for(int i = 1; i<s.size();i++){
//         if (s[i]==s[i-1])
//         {
//             count++;
//         }
        
//     }
//     cout<<count<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class solution{
//     public:
//     int x;
//     bool solution(int x){
//         for (int i = 0; i < x; i++)
//         {
//             /* code */
//             x=x%10;
//             int rev = rev*10+x;
//             x= x/10;
//         }
//         if()
        

//     }
// }

// int main(){
//     solution s;
//     s.x=(121);

    
//     return 0;
// }