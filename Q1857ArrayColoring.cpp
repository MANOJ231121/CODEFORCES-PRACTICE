#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum = 0;
    while (t--)
    {
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i = 0; i < n;i++)
        {
            cin>>arr[i];
            sum = sum +arr[i];

            
        }
        if( sum %2 ==0){
            cout<<"YES"<<endl;
            
        }
        else{
            cout<<"NO"<<endl;
        }
        sum =0;
    }
    
    
    return 0;
}