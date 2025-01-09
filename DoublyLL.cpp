// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev =  NULL;
        
    }
    
    
   
};
//Insert at Head
void inserthead(Node* &head , int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head->prev = temp;
    head = temp;
    temp->prev = NULL;
    
}

//Insert at tail
void inserttail(Node* &head , int data){
    Node* temp = new Node(data);
    int cnt = 0;
    while(temp != NULL){
        temp = temp -> next;
        cnt++;
    }
    temp->next = 
}

 //printing function
    void printval(Node* head){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    
    
 // Getting the length of linkedlist
       int getlength(Node* head){
        Node* temp = head;
        int count = 0;
        while(temp != NULL){
           count++;
            temp = temp->next;
        }
        
        return count;
    }

int main() {
   Node* n1 = new Node(10);
   Node* head = n1;
  // printval(head);
   inserthead(head,20);
     inserthead(head,10);
       inserthead(head,50);
         inserthead(head,80);
           inserthead(head,90);
   printval(head);
   int re = getlength(head);
   cout<<"Length is : "<< re << endl;

    return 0;
}