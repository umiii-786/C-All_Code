#include<stdio.h>
#include<conio.h>
int main(){
char ch;
printf("enter any character  ");
scanf("%c",&ch);
if(ch=='a'  || ch=='e' || ch=='i'  || ch=='o'|| ch=='u' || ch=='A'  || ch=='E' || ch=='I'  || ch=='O'|| ch=='U'){
	printf("given character is vowel ");
}
else{
	printf("character is a consonent");
}

	return 0;
}
