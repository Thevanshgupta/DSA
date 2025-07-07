#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(){
    int *p;
    // p=(int *)malloc(sizeof(int) *5);
    p=new int;
    *p=40;
    cout<<*p;
    // free(p)
    delete p;

    return 0;
}
s