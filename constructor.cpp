#include<iostream>
using namespace std;

class Data{
    public:
        int age;
        string name;
        Data() {
            cout<<"hellpo";
        }
        Data(int a,string n="Poor"){
            age =a;
            n=name;

        }
        void Print(void);
};

void Data::Print() {
    cout<<"Nmame"<<name<<endl;
    cout<<"age: "<< age;
}

int main() {
    Data acc;
    acc.Print();
    Data ac(20);
    ac.Print();
    return 0;
}