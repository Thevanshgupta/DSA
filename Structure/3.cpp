#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Data{
    int a;
    int *p;
}*x;

// struct Data *p;

int main() {
    // p=(struct Data*)malloc(sizeof(int));
    // p=new Data;
    // (*p).a=10;
    // p->b=29.1;
    // cout<<(*p).a<<"\t"<<p-> b;
    // // free(p);
    // delete p;

    x= new Data;
    x->a=10;
    x->p=&(x->a);
    cout<<x->p<<" "<< x->a;
    delete x;
    return 0;
}
