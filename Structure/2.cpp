#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Data{
    int a;
    float b;
};

struct Data *p;

int main() {
    // p=(struct Data*)malloc(sizeof(int));
    p=new Data;
    (*p).a=10;
    p->b=29.1;
    cout<<(*p).a<<"\t"<<p-> b;
    // free(p);
    delete p;
    return 0;
}
