#include <cstdio>
#include <iostream>
using namespace std;
int x =100;
int main () {
	for (;x<200;x++) if (x%3==2 && x%5==3 && x%7==5) cout<<x<<endl;
}
		
