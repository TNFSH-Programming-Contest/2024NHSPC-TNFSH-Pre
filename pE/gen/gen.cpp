#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int subtask = atoi(argv[1]);
	int idx = atoi(argv[2]);
	int n;
	if(subtask==2)n=rnd.next(10,20);
	else if(subtask==3)n=rnd.next(2500,3000);
	else if(subtask==4||subtask==1)n=rnd.next(80000,100000);
	else n=rnd.next(1800000,2000000);
	cout<<n<<'\n';
	for(int i=0;i<=n;i++){
		if(subtask==1)cout<<rnd.next(1,2)<<" \n"[i==n];
		else if(idx%8==1)cout<<rnd.next(1,100)<<" \n"[i==n];
		else if(idx%8==2)cout<<rnd.next(100,10000)<<" \n"[i==n];
		else if(idx%8==3)cout<<rnd.next(10000,1000000)<<" \n"[i==n];
		else if(idx%8==4)cout<<(i%10?rnd.next(500,1000):rnd.next(1,5))<<" \n"[i==n];
		else if(idx%8==5)cout<<(i%17?rnd.next(900000,1000000):rnd.next(1,20))<<" \n"[i==n];
		else if(idx%8==6)cout<<(i%50?rnd.next(900000,1000000):1)<<" \n"[i==n];
		else if(idx%8==7)cout<<(i!=n?rnd.next(900000,1000000):1)<<" \n"[i==n];
		else cout<<(i%2?max(1,i/2):1)<<" \n"[i==n];
	}
	return 0;
}
