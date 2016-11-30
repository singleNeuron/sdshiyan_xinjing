#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
double s=0,i=1;
int main() {
	do {
		s += i;
		i++;
	}
	while (i<=10);
	cout<<s<<endl;
	i = 1;
	s = 0;
	do {
		s += 1/i;
		i++;
	}
	while (i<=100);
	cout<<s<<endl;
	cin>>i;	
	s = 1;
	do {
		s *= i;
		i--;
	}
	while (i!=0);
	cout<<s<<endl;	
}
