#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	float a[3];
	int i;
	for(i=0;i<3;i++)
		cin>>a[i];
	sort(a,a+3);
	cout<<a[2];
} 
