#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <vector<int> > v;
    for(int i = 0; i < n; i++){
        vector <int> row;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            row. push_back(x);
        }
        v.push_back(row);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] != v[j][i]){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}