#include<stdio.h>
int main(){
 int number;
 int count=0;
 printf("enter the any number:");
 scanf("%d",&number);
 for(int i=1;i<=number;i++){
  if(number%i==0){
    count++;
  }
 }
 if(count==2){
  printf(" number is prime ");
 }
else{
    printf("number is not prime ");
}

    return 0;
}