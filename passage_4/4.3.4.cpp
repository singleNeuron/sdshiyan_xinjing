#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int a = 0;
bool b = 1;
int main () {
	for (int i = 1;i<=10;i++) {
		do {
			a++;
			b = 1;
			if (a%2 != 1 || a%3 != 1 || a%5 != 1) b = 0;
		}
		while (b != 1);
		cout<<a<<endl;
	}
}
