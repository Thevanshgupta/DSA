#include<iostream>
using namespace std;

class data{
    public:
         void Greet() {
            cout<<"Hello"<<endl;
         }
         void negGreet(void);
};

void data:: negGreet() {
    cout<<"hello uhvohe"<<endl;
}

int main() {
    data acc;//default constructor
    acc.Greet();
    acc.negGreet();
    return 0;
}