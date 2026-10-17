#include <bits/stdc++.h>
using namespace std;
int main(){
    int y,w;
    cin>>y>>w;
    int possibility =6;
    int t = max(y,w);
    int  count =0;
    for(int i =t;i<= 6;i++){
        count =count +1;    
    }
    int g = __gcd(count,possibility);
    cout << count / g << "/" << possibility / g;
    return 0;
}