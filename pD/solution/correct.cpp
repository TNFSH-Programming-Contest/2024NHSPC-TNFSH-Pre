#include<bits/stdc++.h>
using namespace std;
int a[(int)2e5+5];
long long int pre[(int)2e5+5];
multiset<long long int>ms;
int main(){
    int n,x;
    long long int y,ans1=-1e18,sum=0;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]-=x;
    }
    ms.insert(0);
    for(int i=0;i<n;i++){
        pre[i]=sum;
        sum+=a[i];
        ans1=max(ans1,sum-*ms.begin());
        ms.insert(sum);
    }
    long long int ans2=ans1;
    for(int i=0;i<n;i++){
        ms.erase(ms.find(pre[i]));
        sum+=a[i];
        ans2=max(ans2,sum-*ms.begin());
        ms.insert(sum);
    }
    cout<<max(ans1+x,ans2+x*2-y);
}
