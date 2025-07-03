#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={2,3,4,5,6,67};
    cout<<v.front() <<endl;
    cout<<v.back() <<endl;
    cout<<*v.begin() <<endl;
    cout<<*(v.end()-1)<<endl;
    return 0;
}