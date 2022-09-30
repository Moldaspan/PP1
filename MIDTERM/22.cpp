#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t=" ";
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' and  s[i]<='9'){
         t=s[i]+t;
        }
    }
    cout<<t;
    }