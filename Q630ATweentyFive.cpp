// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     cout<<25;

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>mpp1;
    unordered_map<int,int>mpp2;
    int mini = 0;
    int t1;
    cin>>t1;
    vector<int> arr1(t1);
    for(int i=0; i<t1;i++){
        cin>>arr1[i];
    }
    for(int i =0;i<arr1.size();i++){
        mpp1[arr1[i]]++;
    }
    int t2;
    cin>>t2;
    vector<int>arr2(t2);
    for (int i = 0; i < t2; i++)
    {
        cin>>arr2[i];
        /* code */
    }
    for(int i =0;i<arr2.size();i++){
        mpp2[arr2[i]]++;
    }
    auto it1 = mpp1.begin();
    auto it2 = mpp2.begin();
    while(it1 != mpp1.end()&& it2 != mpp2.end()){
        if(it1->first == it2->first){
            mini = min(it1->second,it2->second);
            cout<<mini<<endl;
            break;
            

        }
    }
    
    return 0;
}