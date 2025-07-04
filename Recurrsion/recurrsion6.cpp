#include<iostream>
using namespace std;
int sum(int arr[],int num){
    if (num <= 0) {
        return 0;
    }
return arr[num-1]+sum(arr,num-1);
    ;
}

int main() {
    int arr[5]={10,12,45,23,77};
    int num=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,num)<<endl;
    // cout<<sum[arr,num]<<endl;
    // cout<<sum(arr[num])<<endl;
    return 0;
}