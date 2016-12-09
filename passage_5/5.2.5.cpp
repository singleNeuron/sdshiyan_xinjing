#include <cstdio>
#include <iostream>
using namespace std;
unsigned int m;
int main () {
	cin>>m;
	int a[m+1],b[m][m+1],loca=m;
	for (int i=1;i<=m;i++) cin>>a[m];
	for (int i=1;i<=m-1;i++) {
		for (int j=1;j<=m;j++) {
			b[i][loca]=a[j];
			loca++;
			if (loca>m) loca=1;
		}
		loca=m+1-i;
	}
	for (int i=1;i<=m-1;i++) {
		for (int j=1;j<=m;j++) cout<<b[i][j]<<" ";
		cout<<endl;
	}
}
