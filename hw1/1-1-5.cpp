#include <iostream>
using namespace std;
int main(){
	int num;
	int a,b,c,d;
	cin>>num;
	a = num/1000;
	b = num/100%10;
	c = num/10%10;
	d = num % 10;
	num = d*1000 + c*100 + b*10 +a;
	cout<< num <<endl;
	return 0;
}