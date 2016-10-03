#include <iostream>
using namespace std;

int main() {
	int cm;
	int foot,inch;
	double tmp;
	cin>>cm;
	tmp = cm/100.0/0.3048;
	foot = tmp;
	inch = (tmp -foot)*12;

	cout<<foot<<" "<<inch<<endl;
	return 0;
}
