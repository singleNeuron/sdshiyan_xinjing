#include <cstdio>
#include <iostream>
using namespace std;
int x;
int main () {
	cin>>x;
	if (x<1) cout<<"ÊäÈëÎÞÐ§";
	else while (x!=1) {
			if (x%2 == 1) x = 3*x+1;
			else x = x/2;
			cout<<x<<endl;
	}
}
		
