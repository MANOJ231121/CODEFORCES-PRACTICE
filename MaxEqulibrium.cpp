#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector <int> array;
    array={1,8,4,3,6};
    int left_sum =0;
    int right_sum =0;
    // for (int i = 0; i < array.size(); i++)
    // {
        if (array.size()%2 !=0)
        {
         for (int j = 0; j < (array.size()/2); j++)
         {
             left_sum =  left_sum +array[j];
         }
         cout<<left_sum<<endl;
        for (int k =( array.size()/2)+1; k < array.size(); k++)
        {
            right_sum = right_sum + array[k];
        }
        cout<<right_sum<<endl;
        if(left_sum ==right_sum){
            cout<<(array.size()/2)<<endl;
        }
        
         
        // }
        
    }
    return 0;
    
    
}