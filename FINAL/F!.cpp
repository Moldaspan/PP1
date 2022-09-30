#include <bits/stdc++.h>
using namespace std;

int rev(int a){
    if(a==2)return 2;
    if(a%2==1)return -1;
    if(a&2==0){
        return rev(a/2);
    }
}
int main(){
    int a;
    cin>>a;
    if(a<1){
        cout<<"No";
        return 0;
    }
    if(rev(a)==-1){
        cout<<"No";
        return 0;
    }
    cout<<"Yes";

}
/* #include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(pow(2,i)==n){
            cout<<i;
            return 0;
        }
    }
    cout<<"NO";
}*/