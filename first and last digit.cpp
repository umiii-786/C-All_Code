#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<" enter the number ";
	cin>>number;
	int i=1,last,first;
	while(number>0){
		
	if(i==1){
    last=number%10;		
    }
    if(i>1){
    first=number%10;
	}
	
    number=number/10;
	}
cout<<" the last digit is "<<last<< " and first digit is "<<first;
	return 0;
}
