#include <math.h> 
#include <iostream>
#include <math.h>
using namespace std;
double s=100,i=1;
int main() {
	while (i<=20) {
		s += 2*100/pow(2,i);
		i++;
	}
	printf ("%.16f",s);
}
