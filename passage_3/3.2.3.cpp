#include <stdio.h>
#include <math.h>
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
float a,b,c;
int i=0;
int main () {
	cin>>a;
	cin>>b;
	cin>>c;
	if (a+b>c && a+c >b && b+c>a) {
		if (a==b && b==c) 			{cout<<"等边";i = 1;}
		else if (a == b) 				{cout<<"等腰";i = 1;}
		else if (a == c) 			{cout<<"等腰";i = 1;}
		else if (b == c) 			{cout<<"等腰";i = 1;}
		if (a*a + b*b == c*c) {cout<<"直角";;i = 1;}
		else if (a*a + c*c == b*b) {cout<<"直角";;i = 1;}
		else if (b*b + c*c == a*a) {cout<<"直角";;i = 1;}
		if (i == 0) 				{cout<<"一般"; }
	}
	else {cout<<"不是三角形";}
}
