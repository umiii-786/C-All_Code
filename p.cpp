#include<iostream>
using namespace std;
int mian(){
	int number;
	bool prim;
	cout<< "enter any number:";
	cin>>number;
	for(int j=2;j<number;j++){
		if(number%j==0){
			prim=false;
		}
	}
	if(prim==false){
		cout<< "number is not prime";
	}
	else{
		cout<< "number is prime :";
	}
	return 0;
}
