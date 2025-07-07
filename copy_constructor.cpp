#include<iostream>
using namespace std;
class Data{
    public:
        string name;
        int age;

        Data(string name, int age){
            this->name=name;
            this->age=age;
        }
        void print(void) {
            cout<<"Name :"<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }

};

int main() {
    Data M1("kanv", 21);
    M1.print();
    Data M2(M1); //default copy constructor
    M2.print();
    return 0;
}