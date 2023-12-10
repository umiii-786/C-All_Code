#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>

using namespace std;
int countword(fstream &);
int countchar(fstream &);
int countdigit(fstream &);
int countline(fstream &);

int main(){
	fstream file;
	int line,alpha,word,digit;
		
	file.open("umair.txt",ios::in);
	
	word=countword(file);
    alpha=countchar(file);
	digit=countdigit(file);
	line=countline(file);
	 file.close();
	 cout<<" there are "<<word<<" words,"<<line<<" lines,"<<digit<<" digits,"<<alpha<<" characters in your file ";
	 
	return 0;
}

int countword(fstream &f){
	string str;
	int word;
	while(f.eof()==0){
		f>>str;
		word+=1;
	}
	return word;
}
int countline(fstream &f1){
	string l;
	int line;
	while(f1.eof()==0){
		getline(f1,l);
		line+=1;
	}
	return line;
}
int countchar(fstream &f2){
	char str;
	int ch;
	while(f2.eof()==0){
		f2>>str;
		ch+=1;
	}
	return ch;
}
int countdigit(fstream &f3){
	char num;
	int digi;
	while(f3.eof()==0){
		f3>>num;
		if(num>='0' && num<='9'){
		digi+=1;
	}
}
	return digi;
}
