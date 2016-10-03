#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x1,x2,x3,y1,y2,y3,a,b,c,area;
	float p;
	cout.precision(2);
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	
	p = (a+b+c)/2;
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	
	cout<<fixed<<area<<endl;
	return 0;
}