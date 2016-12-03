#include <stdio.h>
#include <math.h>
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
float x,y;
int main () {
	for (;;)  {
		cin>>x;
		if (x<0) {
			cout<<"ÊäÈëÎÞÐ§";
		}
		else {break;} 
	}
	if (x>10000) {
		y = 0.05*x;
	}
	else if (x>5000) {
		y = 0.03*x;
	}
	else if (x>1000) {
		y = 0.03*x;
	}
	else {y = 0;}
	cout<<y;
}
