#include<iostream>
using namespace std;
int main(){
string s;
getline(cin,s);
string t;
getline(cin,t);
int first=0;
int second=0;
for(int i=0;i<s.size();i++){
    if((s[i]=='R' and t[i]=='P') || (s[i]=='P' and t[i]=='S') || (s[i]=='S' and t[i]=='R') ){
  second++;
    }
    if((t[i]=='R' and s[i]=='P') || (t[i]=='P' and s[i]=='S') || (t[i]=='S' and s[i]=='R') ){
        first++;

}
if(s[i]==t[i]){
continue;
}
}
if(first>second){
    cout<<"First player wins!";

}
if(first<second){
    cout<<"Second player wins!";
}
if(first==second){
    cout<<"Friendship";
}
}