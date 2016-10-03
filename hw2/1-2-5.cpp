#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int bottle,h,r;
	float Pi=3.14159;
	cin>>h>>r;
	bottle =  ceil(20000/Pi/r/r/h);
	cout<<bottle<<endl;	
	return 0;
	
}