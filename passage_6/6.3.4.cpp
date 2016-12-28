#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int a[2^16-1];
unsigned int dx (unsigned int n) {
	cout<<a[n]<<"\t";
	return (n==1?1:dx(n-1));
}
int main () {
	int n;
	cin>>n;
	for (int i=1;i<=n;i++) cin>>a[i];
	dx(n);
}
