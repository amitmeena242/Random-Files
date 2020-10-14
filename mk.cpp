#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
vector<lli> v;
lli sum=0;
int main(){
    string s;
    cin>>s;
    vector<lli> v[s.length()];
    lli mx=0;
    for(lli i=0;i<s.length();i++){
        lli temp=s[i]-'0',c=0;
        while(temp!=0){
            c++;
            v[i].push_back(1);
            temp--;
        }
        mx=max(mx,c);
    }
    cout<<mx<<endl;
    vector<string> vs;
    for(lli i=0;i<mx;i++){
        string tm="";
        for(lli j=0;j<s.length();j++){
            if(i>=v[j].size()){
                tm+="0";
            }
            else{
                tm+="1";
            }
        }
        vs.push_back(tm);
    }
    for(lli i=0;i<vs.size();i++){
        lli ind=0;
        for(lli j=0;j<vs[i].size();j++){
            if(vs[i][j]=='1'){
                ind=j;
                break;
            }
        }
        for(lli j=ind;j<vs[i].size();j++){
            cout<<vs[i][j];
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}