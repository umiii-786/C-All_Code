#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	fstream fl,fl2;
	fl.open("umair.txt",ios::in);
	char ch;
	int alpha=0,digit=0,space=0,special=0,word=0;
	string str;
	while(fl.eof()==0){
		fl>>ch;
		if(ch>='a' && ch<='z'|| ch>='A' && ch<='Z'){
			alpha+=1;
		}
		if(ch>='0' && ch<='9'){
			digit+=1;
		}
		if(ch==' '){
			space+=1;
		}
        if (!(ch>='a' && ch<='z'|| ch>='A' && ch<='Z' && ch==' ' && ch>='0' && ch<='9'))
		{
			special+=1;
		}
		
	}
	fl.close();
	fl2.open("umair.txt",ios::in);
	while(fl2.eof()==0){
		fl2>>str;
		word+=1;
	}
	fl2.close();
	cout<<"there are "<<word<<" words,"<<alpha<<" alphabets, "<<digit<<" digits, "<<space<<" space, and "<<special <<" special characters ";
	return 0;
}
