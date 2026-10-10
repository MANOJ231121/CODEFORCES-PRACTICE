#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    int sum =0;
    cin>>n>>k;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
        /* code */
    }
    int left =0;
    int right =0;
    while (right <arr1.size())
    {
        sum = sum + arr1[right];
       while(sum> k && left <= right){
        sum = sum - arr1[left];
        left++;
       }
       if(sum == k){
           cout<<"YES"<<endl;
           return 0;
       }
     right++;  
    }
    cout<<"NO"<<endl;
    
    return 0;
}
