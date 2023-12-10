#include<iostream>
using namespace std;
int main(){
	int number;
	int count;
	int reverse;
	cout<<" enter ther number ";
	cin>>number;
	int i=1;
while(number>0){
	reverse=number/10;
	number=number%10;
	count+=1;
	i++;
}

cout<<" number is a "<<count<<" digit number ";
return 0;
}
