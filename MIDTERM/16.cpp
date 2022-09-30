#include<iostream>
using namespace std;
int main(){
    int d,m,y;
    cin>>d>>m>>y;
    if(y>=1970 and y<=2035 and m>=1 and m<=12){
        if( m==1 || m==3 || m==5 || m==7 || m==10 || m==12 || m==8){
            if(d>=1 and d<=31){
                cout<<"YES";

            }
            else{ 
                cout<<"NO";
            }
        }
     if(m==4 || m==6 || m==11 || m==9 ){
    if( d>=1 and d<=30){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
     }
  if(m==2){
      if(d>=1 and d<=28){
          cout<<"YES";
      }
      else{
          cout<<"NO";
      }
  }


}
else{
    cout<<"NO";
}
}