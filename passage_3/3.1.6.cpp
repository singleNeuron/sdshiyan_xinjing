#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
	double a,b,c,s;
	cin>>a>>b>>c;
	if (a+b>c && a+c>b && b+c>a) {
		s=(a+b+c)/2;
		cout<<pow(s*(s-a)*(s-b)*(s-c),0.5);
	}
	else cout<<"Can't";
}
