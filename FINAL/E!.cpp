#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(((m*100) / n) < 80){
        cout << "NO";
    } else {
        cout << "YES";
    }
}