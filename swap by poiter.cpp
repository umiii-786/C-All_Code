#include<iostream>
using namespace std;

void swap(int *a,int *b);
int main(){
	int a,b;
	cout<<" enter a:";
	cin>>a;
	cout<<" enter b:";
	cin>>b;
	cout<<" the value of a is "<<a<<" and value of b is "<<b<<" before swap"<<endl;
	cout<<" the address of a is "<<&a<<" and address of b is "<<&b<<endl;
	cout<<endl;
	swap(&a,&b);
	cout<<" the value of a is "<<a<<" and value of b is "<<b<<" after swap"<<endl;
	cout<<" the address of a is "<<&a<<" and address of b is "<<&b<<endl;
	
	return 0;
}

void swap(int *a,int *b){
	int swap;
	swap=*a;
	*a=*b;
	*b=swap;
}
