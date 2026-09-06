#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;

    while (t--)
    {
        cin>>n;
        vector<int> arr(n);
        for (int i = n; i < 2*n; i++)
        {
            arr.push_back(i);
        }
        for(int i = 0; i<arr.size();i++){
            if (arr[i]% arr[i+1] ==0 )
            {
                cout<<"YES"<<endl;;
                break;
                /* code */
            }
            // else if ()
            // {
            //     /* code */
            // }
            else{
                cout<<"NO"<<endl;
                break;
            }
            
        }
    }

        
        return 0;
    }
    
