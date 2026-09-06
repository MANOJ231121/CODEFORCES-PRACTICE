#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int l;
    int m;
    int n;
    int o;
    int p;
    l = a+b*c;
    m= a*(b+c);
    n= a*b*c;
    o= (a+b)*c;
    p =a+b+c;
    cout<<max({l,m,n,o,p});
    return 0;
}