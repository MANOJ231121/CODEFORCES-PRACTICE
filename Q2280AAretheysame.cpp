#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        vector<long> arr1(a);
        vector<long> arr2(a);
        for (long i = 0; i < a; i++)
        {
            cin>>arr1[i];
            /* code */
        }
        for(long i =0 ; i< a;i++){
            cin>>arr2[i];
        }
        int a1= 0;
        int a2 =0;
        for(int i =0;i<a;i++){
            a1 = a1+ (arr1[i]%2 !=0);
            a2 = a2+ (arr2[i]%2 !=0);
        }
         if (b % 2 == 0) {
        cout << (a2 <= a1 ? "YES" : "NO") << endl;
    } 
    else {
        cout << (a2 >= a1 ? "YES" : "NO") << endl;
    }
        
    }
    
    
    return 0;
}