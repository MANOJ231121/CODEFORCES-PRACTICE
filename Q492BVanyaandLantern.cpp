#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    double maximum = 0;
    int i =0;
    int j = i+1;
    while(j<arr.size()){
        double c = arr[j] -arr[i];
        maximum = max(c,maximum);
        i++;
        j++;
    }
    double ans = max({(double)arr[0],maximum/2, (double)k- arr[n-1]});
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}