#include<iostream>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int h=m;
    int sum=0;
    for(int i=0;i<n;i++){
    cout<<h<<" ";
    sum+=h;
    h=h+k;
    }
    cout<<endl;
    cout<<"sum: "<<sum;
}