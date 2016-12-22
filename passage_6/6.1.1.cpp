long long s = 0;
long long jc (int a) {
	return (a*((a!=1)?(jc(a-1)):1));
}
int main () {
	for (int i=5;i<=11;i+=2) s+=jc(i);
	return s;
}
