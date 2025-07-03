#include<iostream>
using namespace std;
int num =10;
int main() {
    int num =20;
    int *ptr=&num;
    int &x=num;

    cout<<num;
    cout<<::num;
    cout<<ptr;
    cout<<x;
    return 0;
}