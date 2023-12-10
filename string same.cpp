#include<iostream>
#include<string.h>
using namespace std;

void largestnum(int *str);
int main(){
	int num[5]= {117,774,987,87,65};
	largestnum(&num[0]);
	
	return 0;
}
void largestnum(int *str){
	int largest=*str;
	for(int i=1;i<5;i++){
       if(largest<(*(++str))){
       	largest=*str;
	   }
	}

cout<<"largest number is :"<<largest;	
}



/*
void cmpstring(char *str){
	for(int i=0;i<4;i++){
		if(strcmp(str[i],str[4-i-1])==1){
			cout<<"string are same ";
		}
		else{
			return ;
		}
	}
	
	
}*/
