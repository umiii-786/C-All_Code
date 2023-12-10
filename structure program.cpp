#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

typedef struct member{
	
	char name[30];
	int account_no;
	float balance;
	
}Mem;
     void heading(char,int,fstream &f1);
void input_data(struct member M[],int size,fstream &f);
void print_data(struct member M[],int size);


int main(){
	fstream file;
	Mem m[3];

	heading('*',60,file);
	cout<<"	NAME		ACCOUNTNO	BALANCE "<<endl;
	file<<"	NAME		ACCOUNTNO	BALANCE "<<endl;
	file<<endl;
	cout<<endl;
	input_data(m,3,file);
	print_data(m,3);
	heading('*',60,file);
	
	file.close();
	return 0;
}

void input_data(struct member m[],int size,fstream &f){
	f.open("file.docs",ios::out);
	for(int i=0;i<size;i++){
		cout<<" enter the data of member :"<<i+1<<endl;
		
		cout<<" name is :";
		cin>>m[i].name;
		
		cout<<" account no is :";
		cin>>m[i].account_no;
		
		cout<<" enter bank balane :";
		cin>>m[i].balance;
	}	
	cout<<endl;
	for(int i=1;i<=3;i++){
	f<<"	"<<m[i].name<<"		"<<m[i].account_no<<"		"<<m[i].balance<<endl;
	}
}

void heading(char ch,int times,fstream &f1){
for(int i=1;i<=times;i++){
	cout<<ch;
}
   cout<<endl;
for(int i=1;i<=times;i++){
	f1<<ch;
}
   f1<<endl;
}

void print_data(struct member M[],int size){
	for(int i=0;i<size;i++){
		cout<<i+1;
	cout<<"	"<<M[i].name<<"		"<<M[i].account_no<<"		"<<M[i].balance<<endl;
	}
}

