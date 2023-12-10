#include<iostream>
#include<string>
 //#include<iomanip>
#include<fstream>
using namespace std;

bool check(fstream &f1,string);
void output(fstream &);


int main(){
	fstream file;
	file.open("new.txt",ios::out);
	
	if(!file){
		cout<<" file does not exist";
	}
	else{
		
		cout<<" file is exist";
		file<<" my name is umair ...........!";
		file.close();
	}
	
   if(check(file,"new.txt")){
		cout<<" file is exist";
	}
	else{
		cout<<" while does not exist ";
	}
	output(file);
	file.close();
	
	return 0;
}

bool check(fstream &f1 ,string name){
    f1.open(name,ios::in);
	if(f1.fail()){
		return false;
	}
	else{
		return true;
	}
}

void output(fstream &f){
	string st;
	while(f.eof()==0){
		f>>st;
		cout<<st;
	}
}

