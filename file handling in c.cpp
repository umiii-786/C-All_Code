#include<stdio.h>
#include<conio.h>
int main(){
  FILE *f;
  char ch;
  f=fopen("umair.txt","r");
  if(f==NULL){
  	printf("file does not exist");
  }
  else{
  	ch=fgetc(f);
   	while(fgetc(f)!=EOF){
   		printf("%c",ch);
   	    ch=fgetc(f);
	   }
  	
  }
  
  return 0;
}
