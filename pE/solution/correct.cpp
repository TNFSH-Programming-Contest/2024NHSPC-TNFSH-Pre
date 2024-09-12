#include <bits/stdc++.h>
using namespace std;
#define E18 8000000000000000000ULL
int a[(int)2e6+5];
unsigned long long int dp[(int)2e6+5];
int main(){
    cin.tie(0)->sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i];
		dp[i]=(i?E18:0);
	}
	for(int i=1;i<=n;i++){
        unsigned long long int x=1;
        for(int j=1;j<=min(25,i);j++){
		    if(x<=E18/a[i]/a[i-j]){
		    	if(dp[i-j]+x*a[i]*a[i-j]<dp[i])dp[i]=dp[i-j]+x*a[i]*a[i-j];
		    }
            x*=2;
        }
	}
	cout<<dp[n];
}
