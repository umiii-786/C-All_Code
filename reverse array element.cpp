#include<iostream>
using namespace std;
int main(){
	int n=5;
	int array[n];
	int extra;
	for(int i=0;i<n;i++){
		cout<<"enter the "<<i+1<<" element of array";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
		extra=array[i];
		array[i]=array[n-i-1];
		array[n-i-1]=array[i];
	}
	cout<<"your array element after reverse :"<<endl;
	for(int i=0;i<n;i++){
		cout<<"the "<<i+1<<"element of array is : "<<array[i]<<endl;
	}
	
	
	return 0;
}
