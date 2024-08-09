#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int a[(int)2e5+5];
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
    int subtask=atoi(argv[1]);
    if(subtask==1)cout<<rnd.next(100,10000000);
    else if(subtask==2)cout<<rnd.next(10000000000LL,1000000000000000000LL);
    else if(subtask==3)cout<<rnd.next("[1-9][0-9]{4999}");
    else cout<<rnd.next("[1-9][0-9]{999999}");
    cout<<'\n';
}
