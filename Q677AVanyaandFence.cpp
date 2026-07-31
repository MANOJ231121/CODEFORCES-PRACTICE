#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n ,k;
    cin>>n >>k;
    int count =0;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if(array[i]<=k){
            count++;
        }
        else if (array[i]>k)
        {
            count =count +2;
        }
        
    }
    cout<<count<<endl;
    
    return 0;
}