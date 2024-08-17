#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	int subtask = atoi(argv[1]);
	int idx = atoi(argv[2]);
	idx--;
	long long int a,b,c,d,e,f;
	if(subtask==1){
		a=rnd.next(1,100000000),b=rnd.next(1,100000000),c=rnd.next(1,100000000),d=rnd.next(1,100000000),e=rnd.next(1,100000000),f=rnd.next(1,100000000);
		if(idx%3==1)if(a<d)swap(a,d);
		else if(idx%3==2)if(a>d)swap(a,d);
		else a=d;
		if(idx/3%3==1)if(b<e)swap(b,e);
		else if(idx/3%3==2)if(b>e)swap(b,e);
		else b=e;
		if(idx/9%3==1)if(c<f)swap(c,f);
		else if(idx/9%3==2)if(c>f)swap(c,f);
		else c=f;
	}else{
		a=rnd.next(1000000000000000LL,1000000000000000000LL),b=rnd.next(1000000000000000LL,1000000000000000000LL),c=rnd.next(1000000000000000LL,1000000000000000000LL),d=rnd.next(1000000000000000LL,1000000000000000000LL),e=rnd.next(1000000000000000LL,1000000000000000000LL),f=rnd.next(1000000000000000LL,1000000000000000000LL);
		if(idx%3==1)if(a<d)swap(a,d);
		else if(idx%3==2)if(a>d)swap(a,d);
		else a=d;
		if(idx/3%3==1)if(b<e)swap(b,e);
		else if(idx/3%3==2)if(b>e)swap(b,e);
		else b=e;
		if(idx/9%3==1)if(c<f)swap(c,f);
		else if(idx/9%3==2)if(c>f)swap(c,f);
		else c=f;
	}
	cout<<a<<' '<<b<<' '<<c<<'\n'<<d<<' '<<e<<' '<<f<<'\n';
	return 0;
}
