#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int t) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == t) {
            return i; // return index if found
        }
    }
    return -1; // not found
}

int main() {
    int arr[5] = {1, 2, 4, 5, 6};
    int index = linearSearch(arr, 5, 6);
    if(index != -1)
        cout << "Found at index: " << index << endl;
    else
        cout << "Not found" << endl;
    return 0;
}