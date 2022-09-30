#include<iostream>
#include<cmath>
using namespace std;
int main(){
    bool okay=false;
    long long n,m;
    cin>>n>>m;
    for(int i=-60;i<=60;i++){
        if((pow(2,i))*n==m){
            cout<<"YES"<<" "<<i;
            okay=true;
            break;
        }
    }
    if(okay==false){
        cout<<"NO";
    }
}