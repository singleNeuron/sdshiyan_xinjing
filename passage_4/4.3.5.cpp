#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[5]={0};
int temp,tn,small = 39;
int main () {
	cout<<"�⣺���69cm�ֹ�x����"<<endl<<"��ٵþ���:"<<endl<<"	x		";
	for (int i = 1;i<=5;i++) {
		a[i] = i;
		cout<<a[i]<<"	";
	}
	cout<<endl<<"(369-(x*69))%39		";
	for (int i = 1;i<=5;i++) {
		a[i] = (369-(i*69))%39;
		cout<<a[i]<<"	";
	}
	for (int i = 1;i<=5;i++) if (a[i] <= small) small = a[i];
	for (int i = 1;i<=5;i++) if (a[i]==small) temp = i;
	tn = ((369-(temp*69))-a[temp])/39;
	sort (a,a+5);
	cout<<endl<<"�𣺽�69cm "<<temp<<"�أ�39cm "<<tn<<"��ʱ�������٣�Ϊ" <<a[1]<<"cm��";
}
