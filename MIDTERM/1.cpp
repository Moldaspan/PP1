#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<=n;i++){
      int count=0;
      int ii=i;
      while(ii>0){
      if(ii%2==1){
         count++;
      }
      ii=ii/2;
      }
      a[i]=count;
   }
   for(int i=0;i<n;i++){
      cout<<a[i]<<',';
      
   }
   cout<<a[n];
}
