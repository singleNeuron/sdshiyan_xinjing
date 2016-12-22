#include <cstdio>
#include <iostream>
using namespace std;
unsigned int ysh (const unsigned int a) {
	unsigned int s=0;
	for (int i=1;i<a;i++) if (a%i==0) s+=i;
	return s;
}
int main () {
	for (int i=1;;i++) if (ysh(ysh(i))==i) {
		cout<<i;
		return 0;
	}
}
