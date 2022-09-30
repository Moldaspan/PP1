#include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    
    
    }
    for(int i=0;i<n-1;i++){
        
      if(a[i]<=a[i+1]){
            k=k-1;
        }
      if(a[i]>a[i+1]){
            k=k*2;
        }
    }
    cout<<k;
    
    
}