#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;


    };
    void print(Node * head) {
        Node* temp = head;
        while (temp != nullptr) {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        
    }

    void addatlast(Node * head, int d) {
        Node* temp = head;
       while(temp->next != nullptr){
        temp=temp->next;
       }
       Node * newNode=new Node;
       newNode->data=d;
       newNode->next=nullptr;
       temp->next=newNode;
    
    
    }
    void add(Node * &head, int d) {
        Node* newNode=new Node;
        newNode->data=d;
        newNode->next=head;
        
        head = newNode;
    
    }
int main() {
    Node *n1=new Node;
    n1->data=7;
    n1->next=NULL;
    Node* n2=new Node;
    n2->data=20;
    n2->next=NULL;
    n1->next=n2;
    Node* n3=new Node;
    n3->data=7;
    n2->next=n3;
    n3->next=NULL;
    // n1->next=n2;
    print(n1);
    cout<<endl;
    add(n1,25);
    print(n1);
    return 0;
}