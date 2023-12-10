include<iostream>
using namespace std;
int main(){
	int number;
	int fact;
	cout<<"enter any number:";
	cin>>number;
	for(int i=1;i<=number;i++){
	  fact*=i;	
	}
	cout<<"factorial of "<<number<<" is "<<fact;
    
	
	
	return 0;
}
