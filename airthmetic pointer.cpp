#include<iostream>
using namespace std;
int main(){
	int a[]={5,8,9,13,56,59,42};
	int *p,*q;
	p=&a[0];
	q=&a[0]+3;
	
	printf("%d , %d , %d\n",(*p)++,(*p)++,*(p++));
	printf("%d\n",*p);
	printf("%d\n",(*p)++);
	q--;
	
	printf("%d\n", *(q+2)--);
	printf("%d\n", (*(p+2)-2));
	printf("%d\n", *(p++ -2)-1);
	
	
	return 0;
} 
