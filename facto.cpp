#include<iostream>
using namespace std;
int main(){
	int number;
	int fact=1;
	cout<<"enter any number:";
	cin>>number;
	
	
	if(number>0){
	for(int i=1;i<=number;i++){
	  fact*=i;	
	}
cout<<"factorial of "<<number<<" is "<<fact;
}
    
	else{
		cout<<"the factorial of negative num is not possible :"<<endl;
	}
	
	return 0;
}
