#include <iostream>  
#include<cmath> 
using namespace std;
int x,i;
int main ()
{
	x=2;
	cin>>i;
    while(x<=floor(sqrt(i))&&(i%x!=0)) x=x+1;
    if ( x>floor(sqrt(i)))cout<<"YES";
	else cout<<"NO";
}

