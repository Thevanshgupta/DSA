#include<iostream>
using namespace std;
int func(int n){
    if (n <= 1) {
        return 1;
    }
    return func(n-1)+func(n-2);
}
int main() {

    int i=0;
    while( i != 11){


        cout<<func(i++)<<endl;

    }

    
    
    return 0;
}