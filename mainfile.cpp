//mk
#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli m,s;
    cin>>m>>s;
    lli t=ceil(s/9.0);
    if(t>m || t==0){
        cout<<"-1 -1"<<endl;
        return 0;
    }
    vector<lli> v;
    while(s>0){
        if(s>9){
            v.push_back(9);
        }
        else{
            v.push_back(s);
        }
        s-=9;
    }
    v[v.size()-1]-=1;
    if(v.size()!=m){
        cout<<1;
        for(lli i=0;i<(m-v.size()-1);i++){
            cout<<0;
        }
        cout<<v[v.size()-1];
    }
    else{
        cout<<v[v.size()-1]+1;
        for(lli i=0;i<(m-v.size());i++){
            cout<<0;
        }
    }
    for(lli i=v.size()-2;i>=0;i--){
        cout<<v[i];
    }
    cout<<" ";
    v[v.size()-1]+=1;
    for(lli i=0;i<v.size();i++){
        cout<<v[i];
    }
    for(lli i=0;i<(m-v.size());i++){
        cout<<0;
    }
    cout<<endl;
    return 0;
}
