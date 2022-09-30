#include<iostream>
using namespace std;
int main(){
    int n;
    int zero=0,one=0;
    cin>>n;
    string s="";
    while(n>0){
      s=char((n%2)+48)+s;
      n=n/2;
     
    }
    for(int i=0;i<s.size();i++){
    if(s[i]==0+48){      ///stroka consist of char
        zero++;
    }
    else{
        one++;
    }
    }
     cout<<s<<endl;
     cout<<"zeros"<<" "<<zero<<endl;
     cout<<"number of units"<<" "<<one;





    return 0;
}