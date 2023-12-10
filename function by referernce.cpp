#include<iostream>
using namespace std;
double reference(double &salary);
double value(double salary);
int main(){
	double salary;
	cout<<" enter the salary :";
	cin>>salary;
	value(salary);
	cout<<" your salary after calling the function pass by value is "<<salary<<endl;
	reference(salary);
	cout<<" your salary after calling the function pass by refernce is "<<salary<<endl;
	return 0;
}
double reference(double &salary){
	salary=salary+(salary*0.1);
	return salary;
}
double value(double salary){
	 salary=salary+(salary*0.1);
	return salary;
}
