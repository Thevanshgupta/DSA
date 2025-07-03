#include<iostream>
using namespace std;
void func(int a, int b) {

    cout<<a+b;
}

int main() {
    void(*ptr) (int, int);
    ptr=func;
    ptr(10,20);
    return 0;
}