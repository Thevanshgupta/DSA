#include<iostream>
using namespace std;
int main() {
    int a=10,b=20,c=40;
    int *arr[5]={&a,&b,&c};
    int i =0;
    while(i!=4){
        while(i!=4){
            // cout<<arr[i];
            // cout<<arr+i;
            cout<<*(arr+1)<<" ";
            cout<<*arr;
            i++;
        }
    }
    return 0;
}