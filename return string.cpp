#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

char *cat(char *s1,char* s2); 

int main(){
    char *str="umair";
	char *str1="jatt";
	char *name=cat(str,str1);
	
	cout<<" your full name is "<<name;
	getch();
	return 0;
}
char *cat(char *s1,char *s2){
    strupr(s1);
	return s1;
}
