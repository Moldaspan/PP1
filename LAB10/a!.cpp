#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> name;
    vector <int> mark;

    for(int i =0 ;i <n;i++){
        string s;
        int x;
        cin>> s>> x;
        name.push_back(s);
        mark.push_back(x);
    }
    sort(name.begin(), name.end());
    sort(mark.begin(), mark.end());
    for(int i =0; i <n; i++){
        cout << name[i] << " "<< mark[i] << endl;
    }
}