#include<iostream>
using namespace std;
int main(){
	int first,last;
	cout<<" enter the first number (on which you start the find the all prime number) :";
	cin>>first;
	cout<<" enter the last number :";
	cin>>last;
	char prime='t';
	for(int i=first;i<=last;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
			prime='f';
			}
		}
		if(prime=='t'){
			cout<<i<<"\t";
		}
	}
	
	return 0;
}
