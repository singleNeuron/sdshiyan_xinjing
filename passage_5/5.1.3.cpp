#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int n,loca;
long max=0,temp=-pow(2,31);
int main () {
	cin>>n;
	long a[n];
	for (int i=1;i<=n;i++) {
		cin>>a[i];
		if (a[i]>=temp) {
			temp=a[i];
			loca=i;
		}
	}
	a[loca]=a[1];
	a[1]=temp;
	for (int i=1;i<=n;i++) cout<<a[i]<<"\t";
}
