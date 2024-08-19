#include <bits/stdc++.h>
using namespace std;
#define E18 1000000000000000000LL
int a[(int)2e6+5],last[(int)2e6+5];
long long int dp[(int)2e6+5],p2[65];
int main(){
	p2[1]=1;
	for(int i=2;i<=60;i++)p2[i]=p2[i-1]*2;
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i];
		last[i]=i,dp[i]=(i?E18:0);
	}
	for(int i=1;i<=n;i++){
		dp[i]=dp[i-1]+1ll*a[i]*a[i-1],last[i]=i-1;
		if(p2[i-last[i-1]]<=E18/a[i]/a[last[i-1]]){
			if(dp[last[i-1]]+a[i]*a[last[i-1]]*p2[i-last[i-1]]<dp[i])dp[i]=dp[last[i-1]]+a[i]*a[last[i-1]]*p2[i-last[i-1]],last[i]=last[i-1];
		}
	}
	cout<<dp[n];
}
