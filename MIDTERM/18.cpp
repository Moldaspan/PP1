#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    double even;
    double odd;
    int cnt;
    while(cin>>n){
        if(n<0){
            break;
        }
        cnt++;
        if(n%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<fixed<<setprecision(5)<<(even/cnt)*100<<" "<<(odd/cnt)*100;
}