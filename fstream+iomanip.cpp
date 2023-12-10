#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
	double pi=3.1425698764;
	fstream file;
	file.open("sample.txt",ios::out);
	if(!file){
		cout<<" file does not exist";
	}
	else{
		cout<<" your file is exist"<<endl;
		file<<fixed<<pi<<endl;
		file<<setprecision(4)<<pi<<endl;
     file.close();
	}
	fstream f2;
	f2.open("sample.txt",ios::in);
	float num;
	f2>>fixed>>num;
	cout<<num<<endl;
	f2>>num;
	cout<<setprecision(3)<<num;
	
	return 0;
}
