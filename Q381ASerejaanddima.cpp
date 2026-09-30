#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    int left =0;
    int right = arr.size()-1;
    int s_count = 0;
    int c_count =0 ;
    while(left <= right ){
         int turn1 = max(arr[left],arr[right]);
         s_count = s_count + turn1;
         if(turn1 == arr[left]){
            left++;
         }
            else{
                right--;
            }
            if(left>right){
                break;
            }
        int turn2 = max(arr[left],arr[right]);
         c_count = c_count + turn2;
         if(turn2 == arr[left]){
            left++;
         }
            else{
                right--;
            }
         
    }
    cout<<s_count<<" "<< c_count;
    
    return 0;
}