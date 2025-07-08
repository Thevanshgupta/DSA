#include<iostream>
#include<stdlib.h>

using namespace std;
class Node{
    public:
        int data;
        Node* next;// self referenctial pointer
};
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
    n3->next=n2;
    n3->next=NULL;
    return 0;
}