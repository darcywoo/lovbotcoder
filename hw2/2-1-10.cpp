#include <iostream>
using namespace std;

int main() {
	int year,month,day,days;
	bool isLeap=false;
	cin>>year>>month>>day;
	//leap year or not
	if ((year%4==0&&year%100!=0)||year%400==0) {
		isLeap=true;
	}
	
	if (month==1) {
		days = day;
	} else if (month==2){
		days = 31+day;
	} else if (month==3){
		days=59+day;
	} else if (month==4){
		days=90+day;
	} else if (month==5){
		days=120+day;
	} else if (month==6){
		days=151+day;
	} else if (month==7){
		days=181+day;
	} else if (month==8){
		days=212+day;
	} else if (month==9){
		days=243+day;	
	} else if (month==10){
		days=273+day;
	} else if (month==11){
		days=304+day;
	} else if (month==12){
		days=334+day;
	} 
	
	if (month>2&&isLeap) {
		days=days+1;
	}
	
	if (days%5==0||days%5==4) {
		cout<<"Net"<<endl;
	} else {
		cout<<"Fish"<<endl;
	}
	
	return 0;
}