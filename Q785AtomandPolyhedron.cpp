#include<string>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s1= "Tetrahedron";
    string s2 ="Cube";
    string s3 ="Octahedron";
    string s4 ="Dodecahedron";
    string s5 ="Icosahedron";
    string name;
    int count =0;
    for (int i = 0; i < n; i++)
    {
        cin>>name; 
        if(name == s1){
            count =count + 4;
        }
        if (name == s2)
        {
            count =count + 6;
        }
        if (name == s3)
        {
            count =count +8;

        }
        if(name == s4){
            count = count +12;
        }
        if(name == s5){
            count = count +20;
        }
        
    }
    cout <<count<<endl;
    

    return 0;
}