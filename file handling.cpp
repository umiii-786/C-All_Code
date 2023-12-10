#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file ,file2;
	file.open("text.txt",ios::app);
	
	if(!file){
		cout<<" file does not exist:";
	}

	else{
		file<<" my father name is jawaid hassan:"<<endl;
		file<<" hello world"<<endl;
	  file.close();
}

file2.open("text.txt",ios::in);
string line;
while(file2.eof()==0){
getline(file2,line);
cout<<line<<endl;
}
file2.close();
	return 0;
}
