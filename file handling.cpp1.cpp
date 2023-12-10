#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	char *name;
	cout<<"enter your name:";
	cin>>name;
	
	fstream file1;
	file1.open("text.txt",ios::out);
	file1<<"name";
	file1.close();
		
	return 0;
}
