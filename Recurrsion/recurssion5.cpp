#include<iostream>
using namespace std;
int sum(int num){
    if (num <= 1) {
        return num;
    }
return num+sum(num-1);
    ;
}

int main() {
    cout<<sum(4)<<endl;
    return 0;
}