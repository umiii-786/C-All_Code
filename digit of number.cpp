#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<" enter n:";
	cin>>n;
	int sum=0;
	while(n>0){
		sum+=n%10;
		n=n/10;
	}
	cout<<" the sum of digit of number is "<<sum<<endl;
	
	
	return 0;
}
