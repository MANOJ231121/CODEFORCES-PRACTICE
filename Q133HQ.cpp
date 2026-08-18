#include<string>
#include<iostream>
using namespace std;
int main(){
    string n;
    cin>>n;
    for (int i = 0; i < n.size(); i++)
    {
        if(n[i] == 'H' || n[i]=='Q' || n[i]=='9' ){
            cout<<"YES"<<endl;
            return 0;
            }
    }
    cout<<"NO"<<endl;
    return 0;
}