#include <cstdio>
#include <iostream>
using namespace std;
unsigned long long fbn (unsigned long long n) {
	if (n==1) return 0;
	else if (n==2) return 1;
	else return (fbn(n-1)+fbn(n-2));
}
int main () {
	unsigned int n;
	cin>>n;
	for (int i=1;i<=n;i++) cout<<fbn(i)<<"\t";
}
