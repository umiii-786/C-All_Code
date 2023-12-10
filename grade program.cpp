#include<stdio.h>
#include<conio.h>
int main(){
	int phy,chem,math,bio,comp;
	float per;
	int sum=0;
	printf("enter the phy marks:");
	scanf("%d",&phy);
	
	printf("enter the chem marks:");
	scanf("%d",&chem);
	
	printf("enter the bio marks:");
	scanf("%d",&bio);
	
	printf("enter the math marks:");
	scanf("%d",&math);
	
	printf("enter the computer marks:");
	scanf("%d",&comp);
	
	sum=phy+chem+math+bio+comp
	
	;
	per=sum/500;
	if(per>=90){
		printf(" grade is A with percentage is %f\n",per);
	}
	else if(per<90 && per>=80){
	printf(" grade is B with percentage %f \n",per);
   }
   	else if(per<80 && per>=70){
	printf(" grade is C with percentage %f \n",per);
   }
   
	else if(per<70 && per>=60){
	printf(" grade is D with percentage %f \n",per);
	}
   else{
   	printf("your are fail with percentage %f",per);
   }
	
	return 0;
}
