#include <cstdio>
#include <iostream>
using namespace std;
int a =26;
int main ()
{ 
  for (char i='a';i<='z';i++)
  {
//  	cout<<a<<endl;
	for (int k = a;k>=1;k--) cout<<" ";
    for (char j='a';j<=i;j++) cout<<j<<" ";
    cout<<endl; 
    a = a-1;
  }
}

