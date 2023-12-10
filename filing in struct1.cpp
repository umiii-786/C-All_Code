#include<iostream>
#include<fstream>
using namespace std;
struct data{
	char name[100];
	int age;
	float salary;
};
void input(struct data pt[],fstream &,int size);
void print(char ch,fstream &);
int main(){
	char ch='*';
    fstream write;
    struct data emp[3];
    write.open("umiii.txt",ios::app);
    if(!write){
    	cout<<" file does not exist "<<endl;
	}
	else{
	print(ch,write);
	cout<<"   NAME		AGE		SALARY "<<endl;
	write<<endl;
	write<<"   NAME		AGE		SALARY "<<endl;
	
	input(emp,write,3);
	print('*',write);
}

    write.close();
	return 0;
}
void print(char ch,fstream &writ){
int i,j;
for(i=1;i<=30;i++){
	cout<<ch;
}
cout<<endl;
for(j=1;j<=30;j++){
writ<<ch;
}
cout<<endl;
}
void input(struct data pt[],fstream &write,int size){
	for(int i=0;i<size;i++){
		cout<<" enter the data of emp :"<<i+1<<endl;
		cout<<" enter name :";
		cin>>pt[i].name;
		cout<<" enter age of emp :";
		cin>>pt[i].age;
		cout<<" enter the salary :";
		cin>>pt[i].salary;
	}
	cout<<endl;
		for(int i=0;i<size;i++){
		cout<<"  "<<pt[i].name<<"	"<<pt[i].age<<"	"<<pt[i].salary<<endl;
	}
	for(int i=0;i<size;i++){
		write<<"  "<<pt[i].name<<"	"<<pt[i].age<<"	"<<pt[i].salary<<endl;
	}
}
