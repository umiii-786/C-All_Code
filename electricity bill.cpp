#include<iostream>
using namespace std;
int main(){
	int unit;
	float bill;
	cout<<" enter the units :";
	cin>>unit;
	if(unit>=0 && unit<=50)
	bill=(unit*0.5);
	else if(unit>50 && unit<=150){
		bill=unit*0.75;
	}
	else if(unit>150 && unit<=250){
		bill=unit*1.20;
	}
	else if(unit>250){
		bill=unit*1.50;
	}
	
	bill=bill+(bill*0.2);
	cout<<" yor bill electricity bill is "<<bill<<" with units "<<unit<<endl;
}
