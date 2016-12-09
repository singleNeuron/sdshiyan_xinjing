#include <cstdio>
#include <iostream>
using namespace std;
int x,y;
int main () {
	cin>>x>>y;
	int a[x+1][y+1],b[y+1][x+1];
	for (int i=1;i<=x;i++) for (int j=1;j<=y;j++) {
		cin>>a[i][j];
		b[j][i]=a[i][j];
	}
	for (int i=1;i<=y;i++) {
		for (int j=1;j<=x;j++) cout<<b[i][j]<<"\t";
		cout<<endl;
	}
}
