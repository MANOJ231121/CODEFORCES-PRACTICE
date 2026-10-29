#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0;i<arr.size();i++){
            cin>>arr[i];
        }
        int left =0;
        int right =0;
        int count =0;
        int maxi =0;
        while (right<arr.size())
        {
            if(arr[right] ==0){
                count =  count +1;
                maxi = max(maxi, count);
            }
            else{

                count = 0;
                
            }
            right++;
        }
        cout<<maxi<<endl;
        
        /* code */
    }
    
    return 0;
}