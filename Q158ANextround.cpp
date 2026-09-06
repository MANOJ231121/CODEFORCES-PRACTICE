#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n >> k;
    int count =0;
    vector<int> array(n);
    for(int i =0;i<n;i++){
        cin>>array[i];
    }
        for (int j = 0; j < n; j++){
        if(array[j]>=array[k-1]&& array[j]>0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}