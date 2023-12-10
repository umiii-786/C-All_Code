#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<" enter the year :";
	cin>>year;
	
	if(year%4==0){
	if(year%400==0){
    if(year%100!=0){
	cout<<" year is leap ";
	}
	}
	}
    else{	
		cout<<" year is not leap year";
	}
	
	return 0;
	
}
