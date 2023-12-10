#include<iostream>
using namespace std;

char *ret(); 
int main(){
	char *str;
	str=ret();
	cout<<str;
	str[1]='u';
	cout<<str;
	return 0;
}

char *ret(){
	char str[]="jatt";
	return str;
	
	
}
