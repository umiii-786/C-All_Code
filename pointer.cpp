#include<iostream>
using namespace std;
int main(){
	int i=5;
	int *ptr=&i;
	int **pt=&ptr;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<**pt<<endl;
	
	return 0;
}
