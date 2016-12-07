#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int x,y,j,k,temp;
int main () {
	cin>>x>>y>>j>>k;
	int i[x+1][y+1];
	for (int a=1;a<=x;a++) for (int b=1;b<=y;b++) cin>>i[a][b];
	for (int a=1;a<=y;a++) {
		temp=i[j][a];
		i[j][a]=i[k][a];
		i[k][a]=temp;
	}
	for (int a=1;a<=x;a++) {
		for (int b=1;b<=y;b++) cout<<i[a][b]<<" ";
		cout<<endl;
	}
}
