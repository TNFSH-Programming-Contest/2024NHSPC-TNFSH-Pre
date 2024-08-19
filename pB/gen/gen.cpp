#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int subtask = atoi(argv[1]);
	int idx = atoi(argv[2]);
	int n,c,k;
	if(subtask==2)n=rnd.next(80,100);
	else if(subtask==3)n=rnd.next(2500,3000);
	else if(subtask==4)n=rnd.next(360000,400000);
	else n=rnd.next(1800000,2000000);

	if(idx%3==1)c=rnd.next(10,1000);
	else if(idx%3==2)c=rnd.next(10000,1000000);
	else c=rnd.next(800000000,1000000000);
	if(subtask==1)k=0;
	else{
		if(idx%2)k=min(rnd.next(100,200),c-1);
		else k=c-1;
	}
	cout<<n<<' '<<c<<' '<<k<<'\n';
	for(int i=0;i<n;i++){
		if(idx%5==1){
			cout<<rnd.next(1,10)<<" \n"[i==n-1];
		}else if(idx%5==2){
			cout<<rnd.next(800000000,1000000000)<<" \n"[i==n-1];
		}else if(idx%5==3){
			cout<<(i%2?rnd.next(100,1000):rnd.next(10000,100000))<<" \n"[i==n-1];
		}else if(idx%5==4){
			cout<<(i%10?rnd.next(1,10):rnd.next(100000,1000000))<<" \n"[i==n-1];
		}else{
			cout<<(i==n/2?k:1)<<" \n"[i==n-1];
		}
	}
	return 0;
}
