#include <bits/stdc++.h>
using namespace std;
long long int a, b, c, d, e, f, tot, ans, tmp;
void sol(){
    cin >> a >> b >> c >> d >> e >> f;
    tot = a+b+c;
    ans = min(a, f)+min(b, d)+min(c, e);
    tot-=ans;
    tmp=min(a, f);
    a-=tmp;f-=tmp;
    tmp=min(b, d);
    b-=tmp;d-=tmp;
    tmp=min(c, e);
    c-=tmp;e-=tmp;
    if(a||d)tot-=a+d;
    if(b||e)tot-=b+e;
    if(c||f)tot-=c+f;
    cout << abs(ans-tot) << endl;
    return;
}
int main(){
    int tt = 1;
    while(tt--){
        sol();
    }
}
