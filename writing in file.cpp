#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	
	fstream f;
	int alpha,numeric,spaces,words;
	char name[10];
	
	f.open("umiii.txt",ios::in);
	
	if(!f){
		cout<<" file is exist ";
	}
	
	else{
		cout<<" file is exist ";
		f>>name;
		while(f.eof()==0){
			words+=1;
			int i=0;
			while(name[i]!='\0'){
				
			if(name[i]>='0' && name[i]<='9'){
				numeric+=1;
			}
			if(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z'){
				alpha+=1;
			}
			if(name[i]=' '){
				spaces+=1;
			}
			i++;
		}
		
		f>>name;
	}
	
	f.close();
		
	cout<<" there are "<<spaces<<" spaces, "<<alpha<<" alphabets, "<<numeric<<" digits and "<<words<<" words in your array "<<endl;
	
	
	return 0;
	
}
