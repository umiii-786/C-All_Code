#include<iostream>
#include<fstream>
using namespace std;

bool check(fstream &,char file[]);
void read(fstream &);

int main(){
	fstream f1;
    if(check(f1,"umair.txt")){
		cout<<"file is open succesfully";
	}
	else{
		cout<<" error file does not exist:";
	}
read(f1);
f1.close();
}
bool check(fstream &f,char file[]){
	f.open(file,ios::in);
	if(f.fail()){
		return false;
	}
	else{
		return true;
	}
}
