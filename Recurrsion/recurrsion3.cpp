#include<iostream>
using namespace std;
int func(int num){
    if (num <= 1) {
        return 1;
    }
    return num * func(num-1);
}
int main() {
    cout<<func(-4)<<endl;
    return 0;
}