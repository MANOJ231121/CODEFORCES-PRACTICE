#include<string>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    string s;
    for(int i =0;i<n;i++){
        cin>>s;
        if(s == "X++"){
            x++;
        }
        if (s =="++X"){
            ++x;
        }
       if (s =="X--"){
        x--;
       }
       if (s == "--X")
       {
        --x;
       }   
    }
    cout<<x<<endl;
    return 0;
}

//    if(n==1){
//         cin>>s;

//     }
//     if (n==2){
//         cin>>s;
//         cin>>s;
//     }



// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     int x=0;
//     string a;
//     cin>>a;
//     if(a == "++a" || a =="a++" ||a ==""||)
//     cout<<x;
//     return 0;
// }

// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     string s;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>s;
        
//     }
    
//     return 0;
// }