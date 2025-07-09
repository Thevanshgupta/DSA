#include<iostream>
using namespace std;

class btech{
    public:
        int roll;
        float cgpa;

        btech() {

        }

        btech(int r,float f): roll(r),cgpa(f){}
};

int main() {
    btech s1,s2(22,1.2);

    btech s3(s2);
    cout<<s3.roll;
    return 0;
}

//deepcopy                                                                                                   