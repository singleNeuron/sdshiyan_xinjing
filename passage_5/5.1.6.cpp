#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
bool a[52];
unsigned int s=0;
int main () {
	memset(a,0,sizeof(a));
	for (int i=2;i<=52;i++) for (int j=2;j<=52;j++) if (j%i==0) a[j]=1-a[j];
	for (int i=1;i<=52;i++) if (a[i]==0) s+=1;
	cout<<s<<endl;
	for (int i=1;i<=52;i++) if (a[i]==0) cout<<i<<"\t";
}
