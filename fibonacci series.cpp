#include<iostream>
using namespace std;

void fibonacii(int fibo[],int term);
int main(){
	int n;
	int fib[n];
	cout<<"enter the amount of term u want to store : ";
	cin>>n;
	fibonacii(fib,n);
	
	for(int i=0;i<n;i++){
		cout<<fib[i]<<"\t";
	}
	
	return 0;
}

void fibonacii(int fibo[],int n){
  int fterm=0,term,secterm=1;
  fibo[0]=fterm;
  fibo[1]=secterm;
 for(int i=1;i<=n;i++){
 	term=fterm+secterm;
 	fibo[i+1]=term;
 	fterm=secterm;
 	secterm=term;
 }
	
}
