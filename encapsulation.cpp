#include<iostream>
using namespace std;

class Data{
    private:
    int age;
    string name;
    public:
        
        void getdata() {
            cout<<"Name :";cin>>name;
            cout<<"age: "; cin>>age;
        }
        void Print(void);
};

void Data::Print() {
    cout<<"Name: "<<name<<endl;
    cout<<"age: "<< age;
}

int main() {
    Data acc;
    acc.getdata();
    acc.Print();
    return 0;
}