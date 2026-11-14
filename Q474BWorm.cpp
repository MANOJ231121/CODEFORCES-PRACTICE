#include <bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    vector<long>arr1(n);
    for(int i =0;i<n;i++){
        cin>>arr1[i];
    }
    long m;
    cin>>m;
    long pre_sum =0;
    vector<int>presum;
    vector<long>arr2(m);
    for(int i =0;i<m;i++){
        cin>>arr2[i];
    }
    for(int i =0;i<arr1.size();i++){
         pre_sum = pre_sum + arr1[i];
         presum.push_back(pre_sum);
    }  
    for(int i =0;i<arr2.size();i++){
        int ans =-1;
        int left =0;
        int right = presum.size()-1;
        while(left <= right){
            int mid = left+(right - left)/2;
            if(presum[mid] >= arr2[i]){
                ans = mid;
                right = mid-1;    
            }
            else 
            {
                left= mid+1;
                /* code */
            }
            
        }
        cout<<ans+1<<endl;
    }

    return 0;
}