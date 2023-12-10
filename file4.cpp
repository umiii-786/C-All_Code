#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream f1;
	f1.open("new.txt",ios::out);
	for(int i=1;i<=5;i++){
		
	for(int i=1;i<=4;i++){
		f1<<" ";
	}
	
	if(i==1 || i==5){
	for(int i=1;i<=5;i++){
	f1<<"-";
   }
   }
   if(i>1 && i<5){
   	f1<<"-";
   	for(int i=1;i<=3;i++){
   		f1<<" ";
	   }
	   f1<<"-";
   }
	f1<<endl;
}
	f1.close();
	
	char ch;
	fstream hout;
	hout.open("new.txt",ios::in);
	if(!hout)
	{
		cout<<" file is not exist";
	}
	else{
		while(hout.eof()==0){
		hout>>ch;
		cout<<ch;
		cout<<endl;			
	}
	}
	
	return 0;
	
} 
