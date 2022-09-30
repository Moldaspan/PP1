#include <bits/stdc++.h>
using namespace std;
string tolower(string s){
	for(int i =0;i<s.size();i++){
		s[i] = s[i] + 32;
	}
	return s;
}
bool mycomp(string s1,string s2){
	tolower(s1);
	tolower(s2);
	bool ok = true;
	for(int i =0;i<s1.size();i++){
		if(i==s2.size() || s1[i]>s2[i]) return false;
		else if(s1[i]<s2[i]) return true;
	}
}
int main(){
	int n;
	cin>>n;
	string nn[n];
	int mm[n];
	
	for(int i =0;i<n;i++){
		cin>>nn[i];
		cin>>mm[i];
	}
	sort(nn,nn+n,mycomp);
	sort(mm,mm+n);
	for(int i = 0;i<n;i++){
		cout<<nn[i]<<" "<<mm[i]<<endl;
	}

	return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     //freopen("input.txt", "r", stdin);
//     int n;
//     cin>>n;
//     string name;
//     int mark;
//     vector <string> v1;
//     vector <int> v2;
//     for(int i=0;i<n;i++){
//         cin>>name>>mark;
//         v1.push_back(name);
//         v2.push_back(mark);
//     }
//     sort(v1.begin(),v1.end());
//     sort(v2.begin(),v2.end());
//     for(int i=0;i<n;i++){
//         cout<<v1[i]<<" "<<v2[i]<<endl;
//     }
//     return 0;
// }