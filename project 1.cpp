#include<iostream>
#include<string>
using namespace std;

void getinfo(char name[],char department[],char roll_no[],char subjects[][10],int totalmarks[],int obtmarks[]);
void underline();
void sub();
void again();
void printinfo(char subjects[][10],int totalmarks[],int obtmarks[]);
int main(){
	
	char name[10];
    char department[20];
    char roll_no[10];
    char subjects[5][10];
    int totalmarks[5];
    int obtmarks[5];
    
    getinfo(name,department,roll_no,subjects,totalmarks,obtmarks);
cout<<"\t\t\t\t\t\t\tQUAID-AWAM"<<endl;
cout<<"\t\t\t\t\t\tUNIVERSITY OF SCIENCE ENGINERRING"<<endl;
cout<<"\t\t\t\t\t\t\t& TECHNOLOGY"<<endl;
cout<<endl;
underline();
cout<<endl;

cout<<"\t\t\t|NAME:"<<name<<endl;
cout<<"\t\t\t|DEPARTMENT:"<<department<<endl;
cout<<"\t\t\t|ROLL NO:"<<roll_no<<endl;
underline();
sub();
cout<<"\t\t\t\t\t|SUBJECTS|\t\t\t |TOTALMARKS|\t\t\t |OBTAINMARKS|"<<endl;
again();
printinfo(subjects,totalmarks,obtmarks);
again();
	return 0;
}

void getinfo(char name[],char department[],char roll_no[],char subjects[][10],int totalmarks[],int obtmarks[]){

//cout<<" enter you name :";
//fgets(name,10,stdin);
//cout<<" enter you department name :";
//fgets(department,30,stdin);
//cout<<" enter your roll no (22-bscs-22) :";
//fgets(roll_no,10,stdin);
//
//cout<<endl;
//
//for(int i=0;i<5;i++){
//	cout<<" enter subject "<<i+1<<" name :";
//	cin>>subjects[i];
//	cout<<" enter total marks:";
//	cin>>totalmarks[i];
//	cout<<" enter obtain marks :";
//	cin>>obtmarks[i];
//	cout<<endl;	
//}	
}

void underline(){
	cout<<"\t\t\t";
	for(int i=1;i<80;i++){
		cout<<"*";
	}
}

void sub(){
	cout<<"\t\t\t\t\t";
	for(int i=1;i<80;i++){
		cout<<"-";
	}
}

void again(){
		cout<<"\t\t\t";
	for(int i=1;i<80;i++){
		cout<<"-";
	}
}

void printinfo(char subjects[][10],int totalmarks[],int obtmarks[]){
	for(int i=0;i<5;i++){
		if(i==0){
		cout<<"\t\t\t\t\t|"<<i+1<<" "<<subjects[i]<<"\t\t\t\t"<<totalmarks[i]<<"\t\t\t\t"<<obtmarks[i]<<endl;
		cout<<endl;
	}
	else{
		cout<<"\t\t\t|"<<i+1<<" "<<subjects[i]<<"\t\t\t\t"<<totalmarks[i]<<"\t\t\t\t"<<obtmarks[i]<<endl;
		cout<<endl;
	}
    }
}

