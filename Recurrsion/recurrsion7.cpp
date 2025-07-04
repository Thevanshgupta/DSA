#include<iostream>
using namespace std;
int sum(int arr[],int num,int t){
    if (num <= 0) {
        return 0;
    }
// return arr[num-1]+sum(arr,num-1);
void func(int arr[], int num ,int t) {
    if num<=0
        return false;
    if arr[num-1]==t
        return true
}
}

int main() {
    int t=10;
    int arr[5]={10,12,45,23,77};
    int num=sizeof(arr)/sizeof(arr[0]);
    // cout<<sum(arr,num)<<endl;
    // cout<<sum[arr,num]<<endl;
    // cout<<sum(arr[num])<<endl;
    // cout<<func()<<endl;
    return 0;
}
// needed to be corrected.