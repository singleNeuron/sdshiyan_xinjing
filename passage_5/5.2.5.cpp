#include <cstdio>
#include <iostream>
using namespace std;
unsigned int m,loca;
int main () {
	cin>>m;
	unsigned int a[m+1][m],b[m+1];
	for (int i=1;i<=m;i++) cin>>b[i];
	for (int i=1;i<m;i++) {
		loca=i+1;
		for (int j=1;j<=m;j++) {
			a[j][i]=b[loca];
			loca++;
			if (loca==m+1) loca=1;
		}
	}
	for (int i=1;i<m;i++) {
		for (int j=1;j<=m;j++) cout<<a[j][i]<<"\t";
		cout<<endl;
	}
}
