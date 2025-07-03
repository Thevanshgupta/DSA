#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> 
    v={1,2,3,4};
    int sum = 0;
    for(int i : v) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}