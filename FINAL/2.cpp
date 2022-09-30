#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <string, double> a, pair <string, double> b){
    return a.second > b.second;
}
int main(){
    map <string, int> m;
    vector <pair<string, double> > pp;
    vector <string> v;
    string s, t = "";
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            m[t]++;
            v.push_back(t);
            t = "";
        } else {
            t += tolower(s[i]);
        }
        if(i == s.size() - 1){
            m[t]++;
            v.push_back(t);
        }
    }
    for(auto i : m){
        pp.push_back({i.first, (double) m[i.first] * 100 / v.size()});
    }
    sort(pp.begin(), pp.end(), cmp);
    for(auto i : pp){
        cout << i.first << " : " << i.second << "%" << endl;
    }
}