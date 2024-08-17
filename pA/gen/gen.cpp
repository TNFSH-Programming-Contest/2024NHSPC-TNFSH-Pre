#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int subtask = atoi(argv[1]);
	int idx = atoi(argv[2]);
	long long int a,b,c,d,e,f;
	if(subtask==1){
		if(idx%2){
			a=rnd.next(1,100000000),b=rnd.next(1,100000000),c=rnd.next(1,100000000);
			d=rnd.next(max(1LL,a+b+c-200000000),min(100000000LL,a+b+c-2));
			e=rnd.next(max(1LL,a+b+c-d-100000000),min(100000000LL,a+b+c-d-1));
			f=a+b+c-d-e;
		}else{
			long long int x[3],y[3];
			for(int i=0;i<3;i++)x[i]=y[i]=rnd.next(1,100000000);
			shuffle(x,x+3),shuffle(y,y+3);
			a=x[0],b=x[1],c=x[2],d=y[0],e=y[1],f=y[2];
		}
	}else{
		if(idx%2){
			a=rnd.next(1000000000000000LL,1000000000000000000LL),b=rnd.next(1000000000000000LL,1000000000000000000LL),c=rnd.next(1000000000000000LL,1000000000000000000LL);
			d=rnd.next(max(1000000000000000LL,a+b+c-2000000000000000000LL),min(1000000000000000000LL,a+b+c-2000000000000000LL));
			e=rnd.next(max(1000000000000000LL,a+b+c-d-1000000000000000000LL),min(1000000000000000000LL,a+b+c-d-1000000000000000LL));
			f=a+b+c-d-e;
		}else{
			long long int x[3],y[3];
			for(int i=0;i<3;i++)x[i]=y[i]=rnd.next(1000000000000000LL,1000000000000000000LL);
			shuffle(x,x+3),shuffle(y,y+3);
			a=x[0],b=x[1],c=x[2],d=y[0],e=y[1],f=y[2];
		}
	}
	cout<<a<<' '<<b<<' '<<c<<'\n'<<d<<' '<<e<<' '<<f<<'\n';
	return 0;
}
