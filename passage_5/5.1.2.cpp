#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int n;
int main () {
	cin>>n;
	long long a[n];
	a[1]=0;
	a[2]=1;
	for (int i=1;i<=n;i++) {
		if (i>2) a[i]=a[i-1]+a[i-2];
		cout<<a[i]<<"\t";
		if (i%5==0) cout<<endl;
	}
}
