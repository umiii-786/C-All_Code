#include<iostream>
using namespace std;
int mian(){
	int number;
	bool prime;
	cout<<"enter any number:";
	cin>>number;
	for(int j=2;j<number;j++){
		if(number%j==0){
			prime=false;
		}
	}
	if(prime==false){
		cout<<"number is not prime";
	}
	else{
		cout<<"number is prime :";
	}
	return 0;
}
