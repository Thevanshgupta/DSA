// # Variables and Initialization
// Declaration: Specifies the type and name.
// cpp
// Copy
// Edit
// int score;  // Declaration only
// Initialization: Assigns a value.
// int score = 100;  // Declaration + Initialization

#include<iostream>
#include<string>
using namespace std;
int main() {
    int age;
    string name;
    float height;
    bool isStudent;
    char grade;

    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the age: ";
    cin>>age;
    cout<<"Enter the height: ";
    cin>>height;
    cout<<"Are you a student? (1/0): ";
    cin>>isStudent;
    cout<<"Enter the grade: ";
    cin>>grade;

    //for output
    cout<<"here are your details";
    cout<<"Name: "<<name<<endl;
    cout<<"age"<<age<<endl;
    cout<<"height"<<height<<endl;
    cout<<"is student"<<isStudent<<endl;
    cout<<"grade"<<grade<<endl;
    return 0;


}