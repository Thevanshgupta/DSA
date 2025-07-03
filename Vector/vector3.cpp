#include<iostream>
#include<vector>
using namespace std;
int main() {
    
    vector<int> *v = new vector<int>; //dynamic allocation
    int n, elem;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i <n; ++i) {
        cin >> elem;
        v->push_back(elem);
    }
    for (int i:*v) {
        cout<<i;
        i++;
    }
    return 0;
}