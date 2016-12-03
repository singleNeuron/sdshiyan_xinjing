#include <stdio.h>
#include <math.h>
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
float x;
int main () {
	for (;;)  {
		cin>>x;
		if (x<0) {
			cout<<"ÊäÈëÎÞÐ§";
		}
		else {break;} 
	}
	if (x>90) {
		cout<<"Outstanding";
	}
	else if (x>60) {
		cout<<"Satisfactory";
	}
	else {cout<<"Unsatisfactory";}
}
