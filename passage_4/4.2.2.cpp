#include <iostream>
using namespace std;
int main ()
{
  int m,n,r,x;
  cin>>m>>n;
  x = m*n;
  r =m % n;
  while (r)
  {
    m=n;
    n=r;
    r=m % n;
  }
  return (x/n);
}
