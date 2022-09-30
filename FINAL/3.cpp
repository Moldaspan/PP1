#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> agyl;
    vector<string> orys;
    vector<string> ans;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string angl;         
        cin>>angl;
        string rus;
        cin>>rus;
        agyl.push_back(angl);
        orys.push_back(rus);
    }
    int m;
    cin>>m;
    string temp="";
    string temp2="";
    string temp1="";
    for(int i=0;i<m;i++){
        bool okay=false;
        string tap;
        cin>>tap;
        for(int i=0;i<n;i++){
            for(int j=0;j<agyl[i].size();j++){
                temp+=tolower(agyl[i][j]);
            }
            for(int k=0;k<tap.size();k++){
                temp2+=tolower(tap[k]);
            }
            for(int f=0;f<orys[i].size();f++){ 
                
                temp1+=tolower(orys[i][f]);
            }
            if(agyl[i]==tap or temp==temp2){
                   ans.push_back(orys[i]);
                   okay=true;
                   break;
            }
            if(orys[i]==tap or temp1==temp2){
                   ans.push_back(agyl[i]);
                   okay=true;
                   break;
            }
            
            temp="";
            temp1="";
            temp2="";
        }
             if(okay==false  )
             ans.push_back("No such word");
            
    }

for(int i=0;i<ans.size();i++){
cout<<ans[i]<<endl;
}
}