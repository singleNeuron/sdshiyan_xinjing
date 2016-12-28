#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>
using namespace std;
int a[21];
void search (int x,int top,int bot)
{
	int mid;
	if (top<=bot) {
		mid=(top+bot)/2;
		if (x==a[mid]) cout<<"Yes";
		else if (x<a[mid]) search(x,top,mid-1);
		else search (x,mid+1,bot);
	}
	else cout<<"No";
}
int main () {
	int k,x,l,r;
	l=1;r=20;
	for (k=1;k<=20;k++) cin>>a[k];
	cin>>x;
	search (x,l,r);
}
