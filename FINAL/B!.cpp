#include <bits/stdc++.h>
using namespace std;

int main (){
    double x, y; cin >> x >> y;
    int k = 1;
    while(x < y){
        x += x/10; 
        k++;
    }   
    cout << k;
}