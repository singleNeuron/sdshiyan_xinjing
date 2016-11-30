#include <stdio.h> 
#include <iostream>
#include <math.h>
using namespace std;
int t = 0,x;
int main () {
	cin>>x;
	if (x<1) cout<<"ÊäÈëÎÞÐ§";
	else {
		for (int i = 1;i<=x;i++) if (x%i == 0) t +=1; 
		cout<<"total="<<t;
	}
}
