#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main (){
	fstream f;
	int ch=0,newline=0,space=0,tabs=0;
	char read;
	string str;
	f
	
	
	.open("umiii.txt",ios::in);
	if(!f){
		cout<<" file does not exist ";
	}
	else{
		cout<<" file is exist "<<endl;
		
		while(f.eof()==0){
			f>>read;
//			str=read;
			ch+=1;
			if(read == '\n')
				newline+=1;
			if(read == ' ')
				space+=1;
			if(read == '\t')
				tabs+=1;
		}
	}
	 
	 
	 cout<<" there are "<<space<<" spaces, "<<tabs<<" tabs, "<<newline<<" newline, "<<ch<<" characters "<<endl;
	return 0;
}
