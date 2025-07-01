// to take name,roll,and cgpa of two student and print it. and take data using getdata() function and print it using putdata()function.
#include<iostream>
using namespace std;
class btech {
    int roll;
    char name;
    float cgpa;
public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter cgpa: ";
        cin >> cgpa;
    }
    void putdata() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main(){

    btech vansh;
    vansh.getdata();
    vansh.putdata();
    btech cy;
    cy.getdata();
    cy.putdata();

    return 0;
}