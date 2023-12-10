#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("enter side a of triangle:");
	scanf("%d",&a);
		printf("enter side b of triangle:\n");
	scanf("%d",&b);
		printf("enter side C of triangle:\n");
	scanf("%d",&c);
	if(a==b && b==c && c==a){
		printf(" triangle is equlateral\n");
	}
	else if(a==b || a==c || b==c || b==a || c==b || c==a){
		printf("triangle is isoscale\n");
	}
	else{
		printf("triangle is scalene\n");
	}
	getch();
	return 0;
	
}
