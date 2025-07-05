#include<iostream>
using namespace std;

class Data{
    public:
        int age;
        string name;
        Data() {
            cout<<"hellpo";
        }
        Data(int age,string name){
            this->age =age;
            this->name=name;

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
    Data ac(20,"hcdj");
    ac.Print();
    return 0;
}