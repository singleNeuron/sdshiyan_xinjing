#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int a[5][5],sum=0;
int main () {
	memset (a,0,sizeof(a));
	for (int x=1;x<=4;x++) for (int y=1;y<=4;y++) cin>>a[x][y];
	for (int i=1;i<=4;i++) sum += a[i][i];
	for (int i=1;i<=4;i++) sum += a[i][5-i];
	cout<<sum;
}
	
