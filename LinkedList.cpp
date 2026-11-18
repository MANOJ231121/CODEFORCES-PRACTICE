// #include <bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int d,Node* n){
//         data =d;
//         next = n;
//     }
// };
// Node* arry2LL(vector<int> &arr){
//     Node* head= new Node(arr[0]);
//     Node* movr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node* temp = new Node (arr[i]);
//         movr->next =temp;
//         movr =temp;
//         /* code */
//     }
//     return head;
    
// }
// int main(){
//     vector<int> arr ={1,3,4,5,5};
//     Node* head = arry2LL(arr);
//     cout<<head->data;    // Node* y = new Node(arr[3],nullptr);
//     // cout<<y->data;


     
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d, Node* n = nullptr){
        data = d;
        next = n;
    }
};
Node* convert(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* move = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp =new Node(arr[i]);
        move->next =temp;
        move = temp;
        /* code */
    }
    return head;
    

}

int main(){
    vector<int>arr={1,2,3,4,5};
   Node* head =  convert(arr);
   cout<<head->data<<endl;
   Node* temp = head ;
   while(temp != nullptr){
    cout<<temp->data<<" ";
    temp =temp->next;
   }
    
    return 0;
}