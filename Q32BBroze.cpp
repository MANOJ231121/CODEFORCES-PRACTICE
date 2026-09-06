#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char count0 ='0';
    char count1 ='1';
    char count2 = '2';
    for (int i = 0; i < s.size(); i++)
    {
       if(s[i]=='.')
        {
            cout<<count0;
        }
        else if(s[i]== '-'&& s[i+1]== '.' ){
            cout<<count1;
            i++;
        }
        else if(s[i]== '-'&& s[i+1]== '-' ){
            cout<<count2 ;
            i++;
        }
    } 
    return 0;
}