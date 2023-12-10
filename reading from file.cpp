#include<iostream>
#include<fstream>
#include<string>
using namespace std;

bool check(fstream &,string);
void read(fstream &);
int main(){
	fstream file;
	bool ch=check(file,"umiii.txt");
	if(ch==true){
		cout<<" file is exist";
		read(file);
	}
	else{
		cout<<" file does not exist";
	}
	
	file.close();
	return 0;
}
bool check(fstream &f,string name){
	f.open(name,ios::in);
	if(f.fail()){
		return false;
	}
	else{
		return true;
	}	
}

void read(fstream & f1){
strig read;
getline(read,f1);
while(f1.eof()==0){
	cout<<read;
	getline(f1,read);
}
}
