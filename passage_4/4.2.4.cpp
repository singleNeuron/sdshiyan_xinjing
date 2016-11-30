#include <stdio.h> 
#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int f[30];
	f[0] = 0;
	f[1] = 1;
	for (int i=2;i<30;i++) f[i] = f[i-1]+f[i-2];
	for (int i=0;i<30;i++) {
		cout<<f[i];
		if (i%5==4) cout<<endl;
		else cout<<"	";
	}
} 
