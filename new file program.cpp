#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char *name;
	ofstream out;
	out.open("new1.txt");
	cout<<"enter your name :";
	cin>>name;
	
	out<<"your name is "<<name;
	out.close();
	
	
	
	
	
	return 0;
}
