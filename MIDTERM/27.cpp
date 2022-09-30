#include <iostream>
#include <string>
#include <cmath>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int z;
    cin>>z;
    for(int i=0;i<n;i++){
    int d=(i-z+n)%n;
    cout<<a[d]<<" ";
}
}