#include <iostream>
using namespace std;
int r,k;
long long jc (int a) {
	return (a*((a!=1)?(jc(a-1)):1));
}
int main () {
	cin>>r>>k;
	cout<<jc(k)/(jc(r)*jc(k-r));
}
