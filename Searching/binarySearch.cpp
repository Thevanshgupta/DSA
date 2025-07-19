#include<iostream>
using namespace std;
int binary(int arr[], int n, int t) {
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == t)
            return mid;
        else if(arr[mid] < t)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main() {
    int arr[5]={1,2,3,4,5};

    return 0;
}