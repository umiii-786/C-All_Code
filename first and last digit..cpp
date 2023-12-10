#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<" enter the number :";
	cin>>num;
	int last=num%10;
	int first;
	cout<<" last digit of number is "<<last<<endl;
	while(num>10){
	  first=num/10;
	}
	cout<<" the first number is "<<first<<endl;
	num=num*first*10;
		cout<<" the  number is "<<num<<endl;
}
