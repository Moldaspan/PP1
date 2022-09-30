#include<iostream>
using namespace std;
int main(){
    int day,month;
    cin>>month>>day;
    if(month>12 or month<1 or day<1){
        cout<<"Not correct";
        return 0; 
    }
    if(month==1 or month==3 or month==5 or month==7 or month==8 or month==10 or month==12){
    if(day>31){
        cout<<"Not correct";
  return 0;
    }
    }
    if(month==4 or month==6 or month==9 or month==11 ){
    if(day>30){
        cout<<"Not correct";
        return 0;
    }
    }
    if(month==2){
        if(day>28){
            cout<<"Not correct";
            return 0;
        }

    }
    int remainder=0;
    for (int i = 1; i < month; i++)
        {
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                remainder += 31;
            }
            else if(i == 2){
                remainder += 28;
            }
            else
                remainder += 30;
        }
        remainder += day;
        cout << 365 - remainder + 1;

    }
   