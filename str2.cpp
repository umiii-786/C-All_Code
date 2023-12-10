#include<iostream>
using namespace std;

char* ptr(char **,char**);

int main(){
char *str;
char *str2;

 ptr(str,str2);

cout<<str<<endl;
cout<<str2<<endl;

return 0;	
}

char *ptr(char **st,char **st1){
	
  *st="umairjatt";
  *st1="uzairjatt";
  
}

