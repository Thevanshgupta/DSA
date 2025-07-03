#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v={1,2,3,5};
    vector<int>v1={1,2,6,9};
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    vector<int> intersection;
    int i = 0, j = 0;
    while(i < v.size() && j < v1.size()) {
        if(v[i] == v1[j]) {
            intersection.push_back(v[i]);
            ++i;
            ++j;
        } else if(v[i] < v1[j]) {
            ++i;
        } else {
            ++j;
        }
    }
    for(int x : intersection) {
        cout << x << " ";
    }
    cout << endl;
        
    return 0;
    }