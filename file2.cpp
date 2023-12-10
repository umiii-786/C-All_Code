#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
	char name;
	ofstream file("sample.txt");
	file<<" my name is muhammad umair beacuse i live in nawabshah :";
    file.close();
	ifstream file1("sample.txt");
	while(file1.eof() !=0){
		file1>>name;
		cout<<name;
	}
	file1.close();
    getch();
	return 0;
}
