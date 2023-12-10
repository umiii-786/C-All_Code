#include<iostream>
using namespace std;
//void reverse(char *str1,char *str2);

int main(){
	char name[50];
	char newname[100];
	char *str1;
	cout<<"enter the name in your first string:";
	cin>>name;

	int i=-1;
	int j=0;
	while(*str1!='\0'){
		str1++;
		i++;
	}
	while(i>=0){
		newname[j]=*str1;
		str1--;
		i--;
		j++;
	}
	
	newname[j]='\0';

	cout<<"your required reverse string is : " <<newname;
	
	return 0;
}
/*
void reverse(char *str1,char *str2){
	int i=-1;
	while(*str1!='\0'){
		str1++;
		i++;
	}
	while(i>=0){
		*str2=*str1;
		str1--;
		str2++;
		i--;
	}
	
	str2='\0';	
}*/
