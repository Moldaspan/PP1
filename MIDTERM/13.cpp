#include <iostream>
using namespace std;
int main(){
    int n,f;
    cin>>n>>f;
    bool fuck=true;
     for(int i=2;i<n/2;i++){
         if(n%i==0){
            fuck=false;
            break;
         }

     }
     if(fuck==true and n<=500 and f%2==0){
         cout<<"Good job!";

     }  
         else{
             cout<<"Try next time!";
         }
     }