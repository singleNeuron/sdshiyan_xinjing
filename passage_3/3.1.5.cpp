#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
	double a,s;
	cin>>a;
	if (a<=3) s=8;
	else s=8+(a-3)*1.6;
	cout<<s;
}
