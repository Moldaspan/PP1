#include <bits/stdc++.h>
using namespace std;

int main (){
    int a, b, c;
    cin >> a >> b >> c;
    int cntO = 0, cntE = 0;
    if(a % 2 == 0){
        cntE++;
    }
    if(b % 2 == 0){
        cntE++;
    }
    if(c % 2 == 0){
        cntE++;
    }
    if(a % 2 != 0){
        cntO++;
    }
    if(b % 2 != 0){
         cntO++;
    }
    if(c % 2 != 0){
        cntO++;
    }
    if(cntE >= 1 && cntO >= 1){
        cout << "Valid";
    }else {
         cout << "No";
    }
}