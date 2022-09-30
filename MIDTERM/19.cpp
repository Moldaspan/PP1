#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int f;
    for(int i=n;i<=m;i++){
        f=i;
        while(f>0){
            if(f%10==5){
                cout<<i<<" ";
                break;
            }
            else{
                f=f/10;
            }
        }
    }
}