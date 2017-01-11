#include <cstdio>
#include <iostream>
using namespace std;
int main () {
	int a=32,b=32,c=32,d=32,e=32;
	e += (a/2+b/2+c/2+d/2);
	a /= 2;
	b /= 2;
	c /= 2;
	d /= 2;
	d += (a/2+b/2+c/2+e/2);
	a /= 2;
	b /= 2;
	c /= 2;
	e /= 2;
	c += (a/2+b/2+d/2+e/2);
	a /= 2;
	b /= 2;
	d /= 2;
	e /= 2;
	b += (a/2+c/2+d/2+e/2);
	a /= 2;
	c /= 2;
	d /= 2;
	e /= 2;
	a += (b/2+c/2+d/2+e/2);
	b /= 2;
	c /= 2;
	d /= 2;
	e /= 2;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
}
