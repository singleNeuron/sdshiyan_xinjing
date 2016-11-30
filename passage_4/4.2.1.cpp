#include <stdio.h> 
#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int s1 = 0;
	double s2 = 0;
	long long s3 = 1;
	int i = 0;
	while (i<=10) {
		s1 += i;
		i++;
	}
	cout<<s1<<endl;
	i = 1;
	while (i<=100) {
		s2 += 1.0/i;
		i++;
	}
	cout<<s2<<endl;
	cin>>i;
	while (i!=1) {
		s3 = s3 * i;
		i--;
	}
	cout<<s3;
}
