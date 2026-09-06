#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int p;
    cin>>p;
    vector<int>arr1(p);
    for (int i = 0; i < p; i++)
    {
        cin>>arr1[i];
        /* code */
    }
    int q;
    cin>>q;
    vector<int>arr2(q);
        for (int j = 0; j<q ; j++)
        {
            cin>>arr2[j];
            /* code */
        }
        for(int i =0; i<arr1.size();i++){
            arr2.push_back(arr1[i]);
        }
        set<int> s(arr2.begin(),arr2.end());
        if (s.size()==t){
            cout<<"I become the guy."<<endl;
        }
        else
        {
            cout<<"Oh, my keyboard!"<<endl;
            /* code */
        }
        

        
        

        
    

    
    return 0;
}