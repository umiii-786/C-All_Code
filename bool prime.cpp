#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<" enter the any number:";
	cin>>num;
	bool prime;
	for(int i=2;i<num;i++){
		if(num%i==0){
			prime=false;
		}
	}
	if(prime==false){
		cout<<" given num is not prime";
	}
	else
	{
		cout<<" number is prime ";
	}
	
	return 0;
}
