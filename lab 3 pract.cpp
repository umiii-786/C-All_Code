#include<stdio.h>
int main(){
	
/*	
FILE *f1;
char ch;
char *name="umairjatt";
f1=fopen("test.txt","w");
fprintf(f1,"%s",name);
 fclose(f1);
*/
char ch;
FILE *f2;
f2=fopen("test.txt","r");
	fscanf(f2,"%c",&ch);
	printf("%c",&ch);
	fscanf(f2,"%c",&ch);
	printf("%c",&ch);
	fscanf(f2,"%c",&ch);
	printf("%c",&ch);
	fscanf(f2,"%c",&ch);
	printf("%c",&ch);
	fscanf(f2,"%c",&ch);
	printf("%c",&ch);
	fscanf(f2,"%c",&ch);
	printf("%c",&ch);
	fclose(f2);
	return 0;
}
