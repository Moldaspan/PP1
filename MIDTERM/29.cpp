#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ii=0;
  for(int i=2;ii<=n;i=i+3){
          cout<<i<<" ";
          ii++;
          if(ii==n){
              break;
          }
      }
  }