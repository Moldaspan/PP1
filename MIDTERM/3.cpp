#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    string s="",t="";
    while(i<8){
 s+=n%2+48;       
 i++;         
 n=n/2;
    }
    for(int i=s.size()-1;i>=0;i--){
    t+=s[i];

    }
    if(s==t){
        cout<<"It works!";

    }
    else{
        cout<<"Sad";
    }
}
    
