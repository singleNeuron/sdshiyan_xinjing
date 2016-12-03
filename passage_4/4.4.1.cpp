#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
long long n,s=0;
int main () {
	 cin>>n;
	 for (int i=1;i<=n;i++) s += pow(i,i);
	 cout<<s;
}
