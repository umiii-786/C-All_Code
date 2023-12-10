#include<iostream>
using namespace std;

void printarray(int *arr,int n);
int main(){
	int num[5]={54,34,23,98,77};
	printarray(&num[0],5);
	
	return 0;
}
void printarray(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<*arr<<endl;
		arr++;
	}
}
