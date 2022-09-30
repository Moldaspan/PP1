#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i=0;
    int sum=0;
    while(sum<=500000){
     sum+=N*0.3;
     N=1.1*N;
     i++;
    }
    cout<<i;

}