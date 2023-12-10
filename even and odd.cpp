#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf(" enter any number:");
	scanf("%d",&num);
	if(num%2==0){
		printf(" given number is even ");
	}
	else{
		printf("given number is odd");
	}
	getch();
	return 0;
}
