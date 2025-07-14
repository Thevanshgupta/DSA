#include<iostream>
using namespace std;

template<typename T>


int totalcount(T arr[],T val) {
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==val){
            count++;
        }
    }
    return count;
    

}

int main() {
    {
        int arr[5]={1,2,3,4,5};
        cout<<"Cout is: "<<totalcount(arr,5,1)<<end;
    }
    {
        char arr[5]={1,2,3,4,5};
        cout<<"Cout is: "<<totalcount(arr,5,1)<<end;
    }
    return 0;
}