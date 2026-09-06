#include<vector>
#include<iostream>
#include<utility>
using namespace std;
int main(){
    int row;
    int column ;
    int count=0;
    vector<vector<int>>array(5,vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>array[i][j];
            if(array[i][j]==1){
                row = i;
                column =j;
            }
        }
         
    }
    if(row>2){
        count =count+row-2;

    }
    else{
        count = count +2-row;
    }
    if (column > 2)
    count = count +column - 2;
else{
    count =count +2 - column;
}
    cout<<count<<endl;
    return 0;
}