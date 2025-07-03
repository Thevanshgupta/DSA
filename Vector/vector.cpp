#include<vector>
#include<iostream>
using namespace std;

int main() {
    vector<int>v;
    v.push_back(10);
    v.push_back(120);
    v.push_back(130);
    v.push_back(140);
    v.push_back(105);

    int i =0;
    while(i!=v.size()){
        cout<<v[i]<< " ";
        i++;
    }

    return 0;

}


