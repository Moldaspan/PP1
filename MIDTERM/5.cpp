#include<iostream>
using namespace std;
int f(long long n,long long m){
    long long k=m^(n+m);
    long long g=n^k;
    return g;
}
int main(){
    long long n,m;
    cin>>n>>m;
    cout<<f(n,m);

}