#include<stdio.h>
#include<conio.h>
int main(){
	FILE *ptr;
	ptr= fopen("time.c","w");
	if(ptr==NULL){
		printf("file does not exist");
	}
	else{
		printf("file exist");
		fprintf(ptr,"%d",12345);
		fclose(ptr);
	}
    ptr=fopen("time.txt","r");
    char ch;
    int i=1;
    while(1){
    	if(){
    		break;
		}
       fscanf(ptr,"%c",&ch);
	   printf("%c",ch);
	   i++; 
    }
    
    
    fclose(ptr);
	return 0;
}
