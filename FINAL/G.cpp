#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    int mx= 0;
    int cnt = 0;
    for(int i = 0; i < v.size();i++){
        if(mx < v[i]){
            mx = v[i];
        }
    }
    for(int i = 0; i < v.size();i++){
        if(v[i] == mx){
            cnt++;
        }
    }
    cout << cnt << " ";
}