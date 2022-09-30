#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int n;
 cin>>n;
 int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];;
}
int x=0;
for(int i=0;i<n;i++){
  if(i==0){
    x=(a[i]^a[i+1]);
} 
if(i>1){
  x=(x^a[i]);
}

  }
  for(int i=0;i<x;i++){
    if(pow(2,i)== x){
cout<<"YES";
break;
    }
    else if(pow(2,i)>x){
      cout<<"NO";
      break;

    }
  }
}