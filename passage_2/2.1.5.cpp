#include <cstdio>
#include <iostream>
using namespace std;
int main () {
	int a;
	cin>>a;
	cout<<a%10%10*100 + a/10%10*10 + a/100;
}
