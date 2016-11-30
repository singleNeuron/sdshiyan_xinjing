#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
double x,y,z,w,i;
int main () {
	do {
		cin>>i;
		if (i>0) {
			x++;
			z += i;
		}
		else if (i<0) {
			y++;
			w += i;
		}
	}
	while (i!=0);
	cout<<x<<"	"<<z<<endl<<y<<"	"<<w;
}
