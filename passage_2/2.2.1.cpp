#include <cstdio>
#include <iostream>
using namespace std;
int main () {
	int a=50,b=43,c=13;
	a /= 3;	
	b += a;
	c += a;
	b /= 3;	
	a += b;
	c += b;
	c /= 3;	
	a += c;
	b += c;
	cout<<a<<"\t"<<b<<"\t"<<c;
}
