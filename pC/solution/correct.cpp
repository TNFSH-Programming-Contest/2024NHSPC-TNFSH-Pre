#include<bits/stdc++.h>
using namespace std;
vector<int>adj[(int)2e5+5];
int main(){
    int n,m,u,v;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v),adj[v].push_back(u);
    }
    vector<int>ans;
    for(int i=1;i<=n;i++){
        long long int sum=0;
        for(int j:adj[i])sum+=adj[j].size();
        if(sum>adj[i].size()*adj[i].size())ans.push_back(i);
    }
    cout<<ans.size()<<'\n';
    for(int i:ans)cout<<i<<' ';
}