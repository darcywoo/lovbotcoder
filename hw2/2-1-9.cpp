#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a,b,c,p,area;
	cin>>a>>b>>c;
	if (a+b>c && b+c>a && a+c>b) {
		cout.precision(2);
		p = (a+b+c) / 2;
		area = sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<fixed<<area<<endl;
	} else {
		cout<<"ERROR!"<<endl;
	}
	return 0;
}