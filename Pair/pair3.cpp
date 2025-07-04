#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={1,2,4,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    pair<int,int> p[n];

    for (int i=0; i<n;i++) {
        p[i].first=i;
        p[i].second=arr[i];
        cout<<p[i].first <<" "<<p[i].second<<endl;
    }

    sort( &arr[0], &arr[n-1] );

    for(int i=0;i<n; i++) {
        cout<<p[i].first<<"\t"<<p[i].second<<endl;
    }

    
    return 0;
}