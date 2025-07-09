#include<iostream>
using namespace std;
class node {
    public:
        int data;
        node* prev;
        node* next;

 };
        void print(node * head) {
                node* temp = head;
                while (temp ->next!= nullptr) {
                    // cout<<temp->data<<endl;
                    temp=temp->next;
                }
                while(temp!=nullptr){
                    cout<<temp->data<<endl;
                    temp=temp->prev;
                }
            }

int main() {
    node* n1=new node(10);
    node* n2=new node(20);
    n1->next=n2;
    n2->prev=n1;
    node* n3=new node(30);
    node* n4=new node(40);
    n2->next=n3;
    n3->prev=n2;
    n3->next=n4;
    n4->prev=n3;
    print(n3);
    return 0;
}