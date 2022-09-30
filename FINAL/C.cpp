#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map <char, int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]] += 1;
    }
    for(auto & el : mp){
        cout << el.first<< " "<< el.second<< endl;
    }

    return 0;
}