#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	int n=inf.readInt(1,2e5);
	inf.readSpace();
	inf.readInt(0,1e9);
	inf.readSpace();
	inf.readLong(0,1e18);
	inf.readEoln();
	
	while(n--){
		inf.readInt(-1e9,1e9);
		if(n)inf.readSpace();
		else inf.readEoln();
	}
	inf.readEof();
	return 0;
}
