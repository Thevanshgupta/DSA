#include <iostream>
using namespace std;
class btech{
    public:
        int roll;
        float cgpa;
        // btech(int r, float c){
        //     roll =r;
        //     cgpa=c;
        // initilizer list
        btech(int r, float c): roll(r),cgpa(c){}

        void display(){
            cout<<"roll"<<roll;
            cout<<"cgpa"<<cgpa;
        }
};

int main(){
    btech s1(2,1.1);
    s1.display();
    return 0;
}