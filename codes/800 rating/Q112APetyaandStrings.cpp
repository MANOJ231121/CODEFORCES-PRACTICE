#include<string>
#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    cin >> b;
    for (int i = 0; i < a.size(); i++)
    {
        // for (int j = 0; j < b.size(); j++)
        // {
        a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
            if(a[i] >b[i]){
                cout<<1<<endl;
                return 0;
            }
            if (a[i]<b[i])
            {
                cout<<-1<<endl;
                return 0;
            }
    }
    cout<<0<<endl;
    
    return 0;
}