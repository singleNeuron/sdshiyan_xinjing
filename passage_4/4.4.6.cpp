#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main () {
	cout<<"解：设换1分x张，2分y张，5分z张。"<<endl<<"穷举得三维矩阵:"<<endl;
	for (int i = 1;i<48;i++) {
			cout<<endl<<"y="<<i<<endl<<"z	"; 
			for (int j = 1; j<=(100-i)/2;j++) {
				if (100-2*i-5*j<=0) break;
				cout<<j<<"	";
			}
			cout<<endl<<"x	";
			for (int j = 1; j<=(100-i)/2;j++) {
				if (100-2*i-5*j<=0) break;
				cout<<100-2*i-5*j<<"	";
			}
			cout<<endl;
	}
}
