#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<char>>matrix(row, vector<char>(col));
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    bool found = false;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(matrix[i][j]=='C' || matrix[i][j]=='M'|| matrix[i][j]=='Y'){
                found = true;
            }
            
        }
        
    }
    if(found){
        cout<< "#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;

    }
    
    return 0;
}