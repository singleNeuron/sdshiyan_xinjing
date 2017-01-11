#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
	double a,s;
	cin>>a;
	if (a<=1) s=1.5;
	else s=1.5+(a-1)*0.8;
	cout<<s;
}
