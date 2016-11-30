#include <stdio.h> 
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int m,n,r,x;
	cin>>m>>n; 
	x = m*n;
	do
	{
    	r =m % n;
    	m=n;
    	n=r;
//    	cout<<m<<"	"<<n<<"	"<<r<<"	"<<x<<endl; 
	}
	while (r != 0);
	x = x/m;
	cout<<x;
}
