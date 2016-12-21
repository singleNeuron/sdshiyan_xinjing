#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int x,y;
int main () {
	cin>>x>>y;
	int a[x+1][y+1],s[y+1],loca,max=-65535;
	memset(s,0,sizeof(s));
	for (int i=1;i<=x;i++) for (int j=1;j<=y;j++) cin>>a[i][j];
	for (int j=1;j<=y;j++) {
		for (int i=1;i<=x;i++) s[j] += a[i][j];
		if (s[j]>=max) {
			max=s[j];
			loca=j;
		}
	}
	cout<<loca;
}
