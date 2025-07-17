#include<iostream>
using namespace std;
ckass myQueue{
    public:
        class node{
                public:
                    int data;
                    node*next;
                    node(int val): data(val),next(NULL){}
        };
        void push(int);
        void pop();
        int front();
        node*f;
        node*r;
}