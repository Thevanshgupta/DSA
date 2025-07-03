#include<iostream>
using namespace std;
int main() {
    int arr[5]={1,2,4,5,6};
    int i =0;
    while(i!=5) {
        cout<< *(arr+i);// value of array with reference
        i++;
        
    }
    return 0;
}