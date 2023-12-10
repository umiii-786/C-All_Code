#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<" enter n:";
	cin>>num;
	int last,first;
	int count=1;
	while(num>0){
		
		last=num%10;  
		num=num/10;
		count+=1;
		
}


cout<<" given num is a "<<count-1<<" digit number "<<endl;

	return 0;
}
