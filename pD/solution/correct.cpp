#include<bits/stdc++.h>
using namespace std;
int a[(int)2e6+5];
int main(){
    int n,x;
    long long int y,sum=0,mxpre=0,secmxpre=-1e18,mnpre=0,mxran=-1e18,mnran=0;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]-=x;
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
        mxran=max(mxran,sum-mnpre);
        if(i!=n-1||mxpre!=0)mnran=min(mnran,sum-mxpre);
        else mnran=min(mnran,sum-secmxpre);
        secmxpre=max(secmxpre,sum);
        if(secmxpre>mxpre)swap(secmxpre,mxpre);
        mnpre=min(mnpre,sum);
    }
    cout<<max(mxran+x,sum-mnran+x*2-y);
}
