#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int n;
long temp;
int main () {
	cin>>n;
	long a[n];
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n/2;i++) {
		temp=a[i];
		a[i]=a[n+1-i];
		a[n+1-i]=temp;
	}
	for (int i=1;i<=n;i++) cout<<a[i]<<"\t";
}
