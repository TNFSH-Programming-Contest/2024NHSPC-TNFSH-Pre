#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
unordered_set<int>s[(int)2e5+5];
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int subtask=atoi(argv[1]);
	int idx=atoi(argv[2]);
    int n,m;
	if(subtask==1)n=rnd.next(1000,1400);
	else if(subtask==2)n=rnd.next(80,100);
	else if(subtask==3)n=rnd.next(4000,5000);
	else if(subtask==4)n=rnd.next(10000,20000);
	else n=rnd.next(100000,200000);
	vector<pair<int,int>>e;
	if(subtask==1){
		m=n*(n-1)/2;
		for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++){
			if(rnd.next(2))e.push_back({i,j});
			else e.push_back({j,i});
		}
	}else if(subtask==2||subtask==3){
		for(int i=2;i<=n;i++){
			if(rnd.next(2))e.push_back({i,rnd.next(1,i-1)});
			else e.push_back({rnd.next(1,i-1),i});
			s[e.back().first].insert(e.back().second),s[e.back().second].insert(e.back().first);
		}
		int x[5];
		if(subtask==2)x[0]=0,x[1]=100,x[2]=500,x[3]=2000,x[4]=10000;
		else x[0]=0,x[1]=5000,x[2]=50000,x[3]=200000,x[4]=990000;
		for(int i=0;i<x[idx%5];i++){
			int u=rnd.next(1,n),v=rnd.next(1,n);
			if(u!=v&&!s[u].count(v)){
				e.push_back({u,v});
				s[u].insert(v),s[v].insert(u);
			}
		}
	}else if(subtask==4){
		vector<int>vec;
		for(int i=1;i<=n;i++)vec.push_back(i);
		shuffle(vec.begin(),vec.end());
		for(int i=0;i<n;i+=2){
			e.push_back({vec[i],vec[i+1]});
			s[e.back().first].insert(e.back().second),s[e.back().second].insert(e.back().first);
		}
		if(n%2){
			e.push_back({vec[n-1],vec[0]});
			s[e.back().first].insert(e.back().second),s[e.back().second].insert(e.back().first);
		}
		if(idx%2){
			while(e.size()<10000){
				int u=rnd.next(1,n),v=rnd.next(1,n);
				if(u!=v&&!s[u].count(v)){
					e.push_back({u,v});
					s[u].insert(v),s[v].insert(u);
				}
			}
		}
	}else{
		for(int i=2;i<=n;i++){
			if(rnd.next(2))e.push_back({i,rnd.next(1,i-1)});
			else e.push_back({rnd.next(1,i-1),i});
			s[e.back().first].insert(e.back().second),s[e.back().second].insert(e.back().first);
		}
		while(e.size()<1000000){
			int u=rnd.next(1,n),v=rnd.next(1,n);
			if(u!=v&&!s[u].count(v)){
				e.push_back({u,v});
				s[u].insert(v),s[v].insert(u);
			}
		}
	}
	shuffle(e.begin(),e.end());
	cout<<n<<' '<<e.size()<<'\n';
	for(auto p:e)cout<<p.first<<' '<<p.second<<'\n';
}
