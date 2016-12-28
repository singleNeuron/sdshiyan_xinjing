#include <iostream>
using namespace std;
unsigned int h (unsigned int i) {
	return ((i==1?1:h(i-1)+i));
}
int main () {
	unsigned int n;
	cin>>n;
	cout<<h(n);
}
