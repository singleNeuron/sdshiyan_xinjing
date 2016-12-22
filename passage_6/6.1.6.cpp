#include <cstdio>
#include <iostream>
using namespace std;
unsigned int ysh (const unsigned int a) {
	unsigned int s=0;
	for (int i=1;i<a;i++) if (a%i==0) s+=i;
	return s;
}
int main () {
	for (int i=100;i<1000;i++) if ((ysh(i)==1) && ( (100*(i%100%10) + 10*(i/10%10) + i/100 ) ==i)) cout<<i<<"\t";
}
