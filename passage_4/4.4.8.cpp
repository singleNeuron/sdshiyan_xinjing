#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
	cout<<"解：10元x张，5元y张，2元z张，1元w张。"<<endl<<"穷举得三维矩阵："<<endl;
	for (int y = 1;y<=20;y++) {
		cout<<endl<<"y="<<y<<endl<<"x	";
		for (int x = 0;x<=10;x++) if (60-4*y-9*x>=0) cout<<x<<"	";
		cout<<endl<<"z	";
		for (int x = 0;x<=10;x++) if (60-4*y-9*x>=0) cout<<60-4*y-9*x<<"	";
		cout<<endl<<"w	";
		for (int x = 0;x<=10;x++) if (60-4*y-9*x>=0) cout<<100-x-y-(60-4*y-9*x)<<"	";
	}
}
