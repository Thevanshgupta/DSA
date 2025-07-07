#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int *p=(int *)malloc(n*sizeof(int));
    if(p==nullptr) {
        cout<<"Memory allocation failed"<<endl;
        exit(1);
    }
    else{
        for (int i=0;i<n;i++){
            cin >> p + i;
        }
        for (int i=0;i<n;i++){
            cout<<*(p+i);
    }
}
return 0;
}