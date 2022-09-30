#include <iostream>
using namespace std;
int main(){
    string s,t="",z="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            t+=s[i];
            
        }
        else if(s[i]!='1'){
        z+=s[i];
        }
        }
    cout<<t<<z;

}