#include<iostream>
using namespace std;

void swap(int *n1,int *n2);
int main(){
	int a=5,b=9;
cout<<"the value of a  is kamina "<<a<<"and b "<<b<< " is before swap and before calling the function"<<endl;
swap(&a,&b);
cout<<"the value of a  is "<<a<<"and b "<<b<< " is after swap and after calling the function"<<endl;	
	return 0;
}
void swap(int *n1,int *n2){
	int t;
	t=*n1;
	*n1=*n2;
	*n2=t;
}
