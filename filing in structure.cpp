#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;


typedef struct stduent{
	char*name[];
	int age;
	char*clas[];
}st;

typedef struct teacher{
	char *name[];
	int age;
	char *subject[];
}tech;

typedef struct staff{
	char *name[];
	int age;
	char *work[];
}stf;



void teacher(struct teacher[],int size);
void studentt(struct student[],int size);
void staff(struct staff[],int size);

int main(){

	tech th[5];
	teacher(th,5);
	getch();
	return 0;	
}

void teacher(struct teacher t[],int size){
	fstream f1;
    f1.open("new1.txt",ios::out);
    
    for(int i=0;i<size;i++){
	cout<<"enter the data of "<<i+1<<" teacher"<<endl;
	cout<<"name is :";
    cin>>t[i].name[i];
	cout<<"age is :"<<endl;
	cin>>t[i].age;
	cout<<" subject name is :";
	cin>>t[i].subject[i];
	 
	
}
     for(int i=0;i<size;i++){
     f1<<" the data of teacher "<<i+1<<" is :"<<endl;
	 f1<<" name is"<<t[i].name[i]<<endl;
	 f1<<" age is "<<t[i].age<<endl;
	 f1<<" subject name is "<<t[i].subject[i];	
}
}
