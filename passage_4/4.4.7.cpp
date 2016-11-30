#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[3][300];
int main () {
	cout<<"解：设公鸡x只，母鸡y只，小鸡z只。"<<endl<<"穷举得矩阵："<<endl;
	for (int x = 1;x<=20;x++) {
		if ((7*x)%4==0 && 25-(7*x)/4>=0) {
			a[0][x] = 0;
			a[1][x] = x;
			a[2][x] = 25-(7*x)/4;
			a[3][x] = 100-a[1][x]-a[2][x];
		}
		else a[0][x] = 1;
	}
	cout<<"x	";
	for (int x = 1;x<=20;x++) if (a[0][x]==0) cout<<a[1][x]<<"	";
	cout<<endl<<"y	";
	for (int x = 1;x<=20;x++) if (a[0][x]==0) cout<<a[2][x]<<"	";
	cout<<endl<<"z	";
	for (int x = 1;x<=20;x++) if (a[0][x]==0) cout<<a[3][x]<<"	";
}
