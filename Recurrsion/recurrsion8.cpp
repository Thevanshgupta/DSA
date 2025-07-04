#include<iostream>
using namespace std;
void binary(int arr[],int left,int right,int t) {
    if (left>right)
        return -1;
    int mid=left+(right-left)/2;
    if (arr[mid]>t)
        return true;
    else if (arr[mid]>t)
        return binary(arr,left,right,t);
    else
        return binary(arr,left,right,t);
}

int main() {
    int arr[5]={1,2,3,4,5};
    int num=sizeof(arr)/sizeof(int);
    int t=2;
    cout<<binary(arr,num,t);

    return 0;

}