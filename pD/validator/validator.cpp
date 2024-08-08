#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	int n=inf.readInt(1,2e5);
	inf.readSpace();
	inf.readInt(0,1e9);
	inf.readSpace();
	inf.readLong(0,(long long)1e18);
	inf.readEoln();
	
	inf.readInts(n,-1e9,1e9);
	inf.readEoln();
	inf.readEof();
	return 0;
}
