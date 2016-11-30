#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long x,s = 0;

long long cf (long long i) {
	if (i == 1) return 1;
	else return (i*cf(i-1));
}

int main () {
	cin>>x;
	for  (long long i = 1;i<=x;i++) s += cf(i);
	cout<<s;
}
