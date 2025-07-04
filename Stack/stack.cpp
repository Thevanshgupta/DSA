#include<iostream>
using namespace std;
#define n 5

class stack{
    int arr[n];
    int i;
    public:
        stack() {
            if (i=-1);
            
        }
        void push(int x){
            if (i==n-1) {
                cout<<"Overflow";
                return;
            }
            arr[++i]=x;
        }
        void pop(){
            if (i==-1) {
                cout<<"Underflow";
                return;
            }
            i--;
        }
        int top();
        bool isEmpty();

        void printstack(){
        cout << "Stack elements: ";
        for (int j = 0; j <= i; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
        }
    };

    int main() {
        stack s;
        s.push(10);
        s.push(30);
        s.pop();
        s.printstack();
        cout << s.printstack() << endl;

        return 0;
    }

    // why we are here
    // why we need skill
    // why we are here in the class
    // java script, 2nd java nd python