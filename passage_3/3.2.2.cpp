#include <stdio.h>
#include <math.h>
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
float a,b,c;
int main () {
	cin>>a;
	cin>>b;
	cin>>c;
	if (a+b>c && a+c >b && b+c>a) {
		if (a*a + b*b == c*c) cout<<"Yes";
		else if (a*a + c*c == b*b) cout<<"Yes";
		else if (b*b + c*c == a*a) cout<<"Yes";
		else cout<<"No";
	}
	else {cout<<"No";}
}
