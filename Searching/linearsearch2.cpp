#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int t){
    for (int i=0;i<=n;i++){
        if(arr[i]==t){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[5]={1,2,3,4,5};
    int index=linearSearch(arr,5,3);
    if (index!=-1){
        cout<<"index found at :"<<index;
    }
    else{
        cout<<"Not fount";
    }
    return 0;

}