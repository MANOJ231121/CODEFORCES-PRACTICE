#include<iostream>
#include <string>
using namespace std;
int main(){
    string n;
    cin>>n;
    n[0] = toupper(n[0]);
    cout<<n;
    return 0;
}