#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream file;
	file.open("umiii.txt",ios::app);
	if(!file){
		cout<<" file does not exist ";
	}
	else{
		cout<<" file is exist ";
		file<<"web development is my dream";
	}
	file.close();
	
	return 0;
}
