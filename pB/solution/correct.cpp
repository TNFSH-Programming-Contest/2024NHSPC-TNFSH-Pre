#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n, s, a[2000005], c, k;
ll get(ll x){
    ll l=1, r=0;
    ll tmp = 0, ans = 0;
    for(;l<=n;l++){
        while(tmp<x&&r<n)tmp+=a[++r];
        if(tmp>=x)ans+=(n-r+1);
        tmp-=a[l];
    }
    return ans;
}
void sol(){
    cin >> n >> c >> k;
    for(int i=1;i<=n;i++)cin >> a[i];
    cout << get(c-k)-get(c+k+1) << endl;
}
int main(){
    int tt = 1;
    while(tt--){
        sol();
    }
}
