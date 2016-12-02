#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
unsigned int a[17],s=0;
int main () {
	 for (int i=1;i<=16;i++) {
	 	a[i]=pow(2,i-1);
	 	s+=a[i];
	 }
	 cout<<s;
}
