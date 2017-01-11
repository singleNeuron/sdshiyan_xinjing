#include <cstdio>
#include <iostream>
using namespace std;
int main () {
	int a=0;
	while (2*a+3*(65-a) != 150) a++;
	cout<<a<<"\t"<<65-a;
}
