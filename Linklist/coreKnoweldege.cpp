#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data=val;
            next=NULL;
        }
};
class List{
    Node* head;
    Node* tail;
    public: List() {
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);// dynamic allocating
        if(head==nullptr){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;

        }

    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if (head==nullptr){
            head=tail=newNode;

        } else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front(){
        Node* temp=head;
        if (temp==nullptr){
            return;
        } else{
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void pop_back() {
        Node* temp=head;
        if(temp==nullptr){
            return;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        // tail=temp;

    }
    void insert_middle(int val,int pos) {
        Node* newNode=new Node(val);
        if(pos<0){
            cout<<"Invaild";
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
            // temp->next=newNode;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        
    }
    void print(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<< " ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

//push front 

int main() {
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.print();

    l1.push_back(3);
    l1.pop_back();
    l1.insert_middle(2,44);
    l1.print();
    return 0;
}
