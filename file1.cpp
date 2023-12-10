#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch;
	
	ifstream in("sample.txt");
	while(in.eof()!=0){
	in>>ch;
	cout<<ch;
}
in.close();
	ofstream out("sample.txt");
	out<<" umair jatt is a good boy";
	
	out.close();	
	return 0;
}
