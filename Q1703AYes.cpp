#include<string>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while (t--)
    {
        cin>>s;
        if((s =="YES")|| (s=="yes")|| (s=="Yes")||(s=="YEs")||(s=="YeS")||(s=="yES")||(s =="yeS")||(s =="yEs")){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
    

    return 0;
}