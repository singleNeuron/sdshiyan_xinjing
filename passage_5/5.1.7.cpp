#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
bool a[11];
int main () {
	int s=0;
	memset (a,1,sizeof(a));
	for (int i=1;i<=1000;i++) {
		for (int j=1;j<=i;j++) {
			s++;
			if(s==11) s=1;
		}
		a[s]=0;
	}
	for (int i=1;i<=10;i++) if (a[i]==1) cout<<i<<" ";
}
