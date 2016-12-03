#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	float a[3];
	int i;
	for(i=0;i<3;i++)
		cin>>a[i];
	sort(a,a+3);
	cout<<a[0];
	cout<<" ";
	cout<<a[1];
	cout<<" ";
	cout<<a[2];
} 
