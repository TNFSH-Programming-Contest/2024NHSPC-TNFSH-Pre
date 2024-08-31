#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int a[(int)2e6+5];
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int idx=atoi(argv[1]);
	int subtask=atoi(argv[2]);
    int n=(subtask==1?rnd.next(2500,3000):subtask==8?rnd.next(1800000,2000000):rnd.next(400000,500000)),x;
    if(subtask==2||subtask==4||subtask==5)x=0;
    else if(idx%3==0)x=rnd.next(1,1000);
    else if(idx%3==1)x=rnd.next(1000,1000000);
    else x=rnd.next(1000000,1000000000);
    long long int y;
    if(subtask==2||subtask==3)y=1e18;
    else if(subtask==4)y=0;
    else if(subtask==6)y=x;
    else if(idx%4==0)y=rnd.next(1,10000);
    else if(idx%4==1)y=rnd.next(10000,10000000);
    else if(idx%4==2)y=rnd.next(10000000LL,10000000000LL);
    else y=rnd.next(10000000000LL,1000000000000LL);
    cout<<n<<' '<<x<<' '<<y<<'\n';
    for(int i=0;i<n;i++){
        if(idx%5==0)a[i]=rnd.next(1,100);
        else if(idx%5==1)a[i]=rnd.next(1000,100000);
        else if(idx%5==2)a[i]=rnd.next(100000,10000000);
        else if(idx%5==3)a[i]=rnd.next(10000000,1000000000);
        else a[i]=rnd.next(1,1000000000);
    }
    if(idx%6==0){
        for(int i=0;i<n;i++)a[i]=-a[i];
        a[rnd.next(n)]=1;
    }else if(idx%6==1){
        for(int i=0;i<n;i+=2)a[i]=-a[i];
    }else if(idx%6==2){
        for(int i=0;i<n;i+=3)a[i]=-a[i];
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" \n"[i==n-1];
}
