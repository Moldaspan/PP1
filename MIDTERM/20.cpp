#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int sum=0;
for(int i=1;i<s.size();i++){
    sum+=s[i]-48;
}
if(s[0]-48==sum%10){
    cout<<"YES";
}
else{
    cout<<"NO";

}

}