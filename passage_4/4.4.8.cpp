#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main () {
	cout<<"�⣺10Ԫx�ţ�5Ԫy�ţ�2Ԫz�ţ�1Ԫw�š�"<<endl<<"��ٵ���ά����"<<endl;
	for (int y = 1;y<=20;y++) {
		cout<<endl<<"y="<<y<<endl<<"x	";
		for (int x = 0;x<=10;x++) if (60-4*y-9*x>=0) cout<<x<<"	";
		cout<<endl<<"z	";
		for (int x = 0;x<=10;x++) if (60-4*y-9*x>=0) cout<<60-4*y-9*x<<"	";
		cout<<endl<<"w	";
		for (int x = 0;x<=10;x++) if (60-4*y-9*x>=0) cout<<100-x-y-(60-4*y-9*x)<<"	";
	}
}
