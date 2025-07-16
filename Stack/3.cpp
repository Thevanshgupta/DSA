#include<iostream>
using namespace std;

class Stack{
    public:
        class node{
            public:
                int data;
                node*next;

                node(int val): data(val),next(nullptr){}
        };
        node*top();
        stack():top(nullptr){}
        void push(int);
        void pop();
        int topEle();
        void display();
        bool empty();
};
int main() {
    return 0;
}