// binary
#include <bits/stdc++.h>
using namespace std;
 
 //tail recurcion
string f(int n, string res){
    if(n == 0) return res;
    return f(n / 2, char(n % 2 +48) + res);
}

int main(){
    int x;
    cin >> x;
    cout << f(x, "")<< endl;

    return 0;
}
