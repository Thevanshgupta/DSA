#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

    void print(node * head) {
        node* temp = head;
        while (temp != nullptr) {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        
    }

    void deleteSeries( node* head, int s,int l){
        node

    }



};

int main() {
    node *n1=new node;
    n1->data=7;
    n1->next=NULL;
    node* n2=new node;
    n2->data=20;
    n2->next=NULL;
    n1->next=n2;
    node* n3=new node;
    n3->data=7;
    n2->next=n3;
    n3->next=NULL;
    // n1->next=n2;
    n1->print(n1);
    cout<<endl;
    // add(n1,25);
    n1->print(n1);
    return 0;

}