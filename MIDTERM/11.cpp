#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double n;
cin>>n;
char x;
cin>>x;
double res2;
if(x=='k'){
    int hell;
    cin>>hell;
     double res=n/1024;
cout<<fixed<<setprecision(hell);
cout<<res;
}
else if(x=='b'){
    res2=n*1024;
    cout<<res2;
}

}