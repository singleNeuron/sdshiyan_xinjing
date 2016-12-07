#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int x,y,minnum=10000,minx,miny;
int main () {
	cin>>x>>y;
	unsigned int a[x+1][y+1];
	for (int i=1;i<=y;i++) for (int j=1;j<=x;j++) cin>>a[j][i];
	for (int i=1;i<=y;i++) for (int j=1;j<=x;j++) if (a[j][i]<=minnum) {
		minnum=a[j][i];
		minx=j;
		miny=i;
	}
	printf ("[%d,%d] %d",minx,miny,minnum);
}
