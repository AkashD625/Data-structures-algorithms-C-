// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    //New node with value creationn
    Node(int data){
        
        this->data = data;
        this->next = NULL;
    }
    
    void insertathead(Node* &head , int data){
Node* temp = new Node(data);
temp->next = head;
head = temp;
    }
    
    
    //printing the linked list
     void print(Node* &head){
         int cnt = 1;
         Node* temp = head;
         while(temp != NULL){
             cout<<temp->data<<" "<<endl;
             temp = temp->next;
         }
     }
    
    
    
};



int main() {
    
    Node* n1 = new Node(108);
    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl;
    
    //Inserting at head
    Node* head;
    
    
   

    return 0;
}