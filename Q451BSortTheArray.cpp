#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>arr2(n);
    arr2 = arr;
    sort(arr2.begin(),arr2.end());
    int left = 0;
    int right = arr.size()-1;
    while(left <arr.size() && arr[left]==arr2[left]){
        left++;
    }
      if (left == arr.size())
        {
            cout<<"yes"<<endl;
            cout<<"1  1"<<endl;
            return 0;
        } 
    while(right>=0 && arr[right] == arr2[right]){
        right--;
    }
    reverse(arr.begin()+left,arr.begin()+right+1);
 
    if(arr == arr2){
        cout<<"yes"<<endl;
        cout<<left+1<<' '<<right+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    return 0;
}