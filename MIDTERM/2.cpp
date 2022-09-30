#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    string s="";
    string t="";
    int i=0;

    while(i<8){
    s+=a%2+'0';
    a=a/2;
      i++;

    }
    int j=0;
    while(j<8){
    t+=b%2+'0';
    b=b/2;
    j++;

    }
    for(int i=0;i<s.size();i++){
    if(i==n){ 
    if(s[i]=='1'){
        s[i]='0';
        break;
    }   
    else{
        s[i]='1';
    }
    }
    }
    for(int i=0;i<t.size();i++){
    if(i==n){
        if(t[i]=='1'){
            t[i]='0';
            break;
        }
    else{
        t[i]='1';
    }
    }
    } 
    int k=0,k2=0;
    for(int i=0;i<s.size();i++){
     k+=pow(2,i)*(s[i]-'0');
    } 
    for(int i=0;i<t.size();i++){
    k2+=pow(2,i)*(t[i]-'0');
    }
    if(k>k2){
        cout<<"Good deal for the first number";
    }
     else if(k<k2){
        cout<<"Good deal for the second number";

    }
    else{
        cout<<"Nothing has changed";
    }
    
    }