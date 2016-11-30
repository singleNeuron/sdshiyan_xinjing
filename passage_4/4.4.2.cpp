#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
double s = 0;

long long cf (long long i) {
	if (i == 1) return 1;
	else return (i*cf(i-1));
}

int main () {
	for  (long long i = 1;i<=10;i++) s += 1.0/cf(i);
	cout<<s;
}
