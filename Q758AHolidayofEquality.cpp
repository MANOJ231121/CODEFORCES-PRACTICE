#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int maximum;
    int sum =0;
    vector<int> arr(t);
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin>>arr[i];
        if(arr.size() == 0){
            cout<<0;
        }
        else if(arr.size() != 0){
            maximum = *max_element(arr.begin(), arr.end());
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + (maximum - arr[i]);
        /* code */
    }
    cout<<sum;
    
    
    return 0;
}