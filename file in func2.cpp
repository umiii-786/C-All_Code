#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;

void print(fstream &);
bool check(fstream &,string);
int main(){
	fstream file;
	if(check(file,"hello.doc")){
		cout<<" file is exist ";
	}
	else{
		cout<<"file does not exist";
	}
	print(file);
	file.close();
	return 0;
}
bool check(fstream &f,string name){
	f.open(name,ios::out);
	if(f.fail()){
		return false;
	}
	else{
		return true;
	}
}

void print(fstream &f1){
	string str="jattt";
		f1<<str;
	}
