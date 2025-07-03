#include<iostream>
#include<string>
using namespace std;
class btech {
public:
    int roll;
    string name;
    float cgpa;
};

int main() {
    btech s1;
    btech *s2=new btech;
    s1.roll=23;
    s2->roll=21;

    cout<<"roll"<<s1.roll<<endl;
    cout<<"roll"<<(*s2).roll<<endl;
    return 0;
}