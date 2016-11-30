#include <cstdio>
#include <iostream>
#include <cmath>
using  namespace std;
int s[25],a=1,i,x = 2;
int j,k;

int sum (int n,bool c) {
	for (j = 1;j<=25;j++) for(k = 1;k<=25;k++) if (s[j]+s[k]==n && c==0) return (s[j]);else if (s[j]+s[k]==n && c==1) return (s[k]); 
}
	
int main () {
	for (int i = 2;i<=100;i++) {
		x=2;
    	while(x<=floor(sqrt(i))&&(i%x!=0)) x=x+1;
   		if ( x>floor(sqrt(i))){
		   s[a] = i;
//		   cout<<s[a]<<"\t";
		   a++;
    	}
    }
    for (int i = 4;i<=100;i=i+2) cout<<i<<"="<<sum(i,0)<<"+"<<sum(i,1)<<endl;
}
