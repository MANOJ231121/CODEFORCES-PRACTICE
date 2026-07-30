// #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> array(n,vector<int>(3));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>array[i][j];
             
//         }
//     }
    
    
//     return 0;
// }


// array[0][j] + array[][1] + array[i][2] == 0

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//         int x1, x2 , x3;
//     cin>>x1 >> x2 >> x3;
//     int y1 , y2, y3;
//     cin >> y1 >>y2 >> y3;
//     int z1 , z2, z3;
//     cin >> z1 >>z2 >> z3;
//     if((x1 +y1+z1)==0 &&(x2 +y2+z2)==0 &&(x3 +y3+z3)==0){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }

//     return 0;
// }
// // #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     vector <int> a1(n),a2(n),a3(n);
//     for (int i = 0; i < n-1; i++)
//     {
//         cin>>a1[i];
//         cin>>a2[i];
//         cin>>a3[i];
//     }
    
//     return 0;
// }
// #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    vector<vector<int>> array(n,vector<int>(3));
//    for (int i = 0; i < n; i++)
//    {
//     for (int j = 0; j < n; j++)
//     {
//         cin>>array[i][j];
//     }
//     if((array[i][0])+(array[i+1][0])+(array[i+2][0]==0)){
//         cout<<"YES"<<endl;
    
//    }
//    else{
//     cout<<"no"<<endl;
//    }
// }
   
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sumx=0;
    int sumy =0;
    int sumz= 0;
    for (int i = 0; i < n; i++)
    {
        int x,y,z;
        cin>> x >> y >> z;
        sumx= sumx+x;
        sumy= sumy+y;
        sumz= sumz+z;


    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}