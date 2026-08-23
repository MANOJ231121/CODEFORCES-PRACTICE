#include <algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    vector<int> arr(3);
    while (n--)
    {
        cin>>a>>b>>c;
     arr={a,b,c};
    sort(arr.begin(),arr.end());
    cout<<arr[1]<<endl;    
    }
    
    return 0;
}