#include<iostream>
using namespace std;

void printline(char,int);
int main(){
	printline('*',30);
	cout<<" DATA  TYPE  RANGE ";
	printline('*',30);
	cout<<" CHAR             -128 TO 127"<<endl;
	cout<<" short             +32 TO 127"<<endl;
	cout<<" CHAR              system dependent "<<endl;
	cout<<" long              3546 TO 75834"<<endl;
	printline('=',40);
	return 0;
}

void printline(char ch,int n){
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<ch;
	}
	cout<<endl;
}
