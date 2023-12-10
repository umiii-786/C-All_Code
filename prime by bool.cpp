#include<iostream>
using namespace std;
int main (){
	int num;
	cin>>num;
	bool prime=true;
	for(int i=2;i<num;i++){
		if(num%i==0){
			prime=false;
		}
	}
	if(prime=true){
		cout<<" number is not prime ";
	}
	else if(prime=false){
		cout<<" number is prime ";
	}
	else{
		cout<<" invalid number";
	}
	
	return 0;
	
}
