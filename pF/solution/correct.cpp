#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+9;
int fp(int x,int y){
    if(y==0)return 1;
    if(y%2)return 1ll*fp(1ll*x*x%mod,y/2)*x%mod;
    else return fp(1ll*x*x%mod,y/2);
}
int main(){
    string s;
    cin>>s;
    long long int now=0;
    for(char c:s){
        now*=10;
        now=(now+c-'0')%(mod-1);
    }
    cout<<fp(2,now);
}
