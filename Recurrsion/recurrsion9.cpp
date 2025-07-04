#include<iostream>
using namespace std;
void printpi( string str){
    if (str.length() ==0) {
        return ;
    }
    if (str[0]=='p'&&str[1]=='i'){
        cout<<"3.14";
        printpi(str.substr(2));
    }
    else{
        cout<<str[0];
        printpi(str.substr(1));
    }
}

int main () {
    string str="nerjnvpipipipiiii";
    printpi(str);
    return 0;
}