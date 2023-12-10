#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	char ch;
	file.open("sample.txt",ios::in);
	if(!file){
		cout<<"file does not exist";
	}
	else{
	//	cout<<"file is exist";
		//file<<" umair";
		while(file.eof()!=0){
		file>>ch;
		cout<<ch;
	}
	file.close();
}

return 0;

}
