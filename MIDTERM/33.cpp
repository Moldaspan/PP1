#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int k;
cin>>k;
int b[n];
for(int i=0;i<n;i++){
 b[i]=abs(k-a[i]);
}
int g;
int min=b[0];
for(int i=0;i<n;i++){
    if(b[i]<min){
        min=b[i];
        g=i;

    }
}
cout<<g;
}

