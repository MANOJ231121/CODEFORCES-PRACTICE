#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        vector<int>arr2;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int left =0;
        int right= arr.size()-1;
        while(left<right){
            arr2.push_back(arr[left]);
            arr2.push_back(arr[right]);
            left++;
            right--;
        }
            if (left == right) {
            arr2.push_back(arr[left]);
        }
        for (int i = 0; i < arr2.size(); i++){
            cout<<arr2[i]<<" ";
        }
      
        cout<<endl;
    }
    return 0;
}