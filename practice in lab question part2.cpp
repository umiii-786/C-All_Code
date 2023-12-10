#include<iostream>
#include<fstream>
#include<string>
using namespace std;

bool check(string name, fstream &f);
int main(){
	
	string name="umiii.txt";
	fstream file1;
	if(check(name,file1)){
		cout<<"file is exist ";
	}
	else{
		cout<<" file  does not exist "<<endl;
	}
	
	return 0;
}

bool check(string name,fstream &f){
	
	if(f.open(name,ios::app)){
		return true;
	}
	else{
		return false;
	}
	
}
