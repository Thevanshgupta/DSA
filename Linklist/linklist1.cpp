#include<iostream>
#include<stdlib.h>
using namespace std;

// concept for malloc
int main (){

    int* ptr= (int *)malloc (sizeof(int)*5);
    if (ptr != NULL){
        cout<<"Memory allocate memory suxx: \n";
    }
    else {
        cout<<"fail to allocate :";
    }
    for(int i=0; i<5;i++){
        cout<<"arr ["<<i<<"]";
        // cin>>ptr[i];
        cin>>*(ptr+i);
    }
    for (int i=0; i<5;i++){
        cout<<*(ptr+i);
    }


    free(ptr); // use to dellocate memory which is allocated by malloc
    ptr=NULL; // use to avoid dangling pointer
    return 0;
}