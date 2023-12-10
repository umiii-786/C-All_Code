#include<iostream>
using namespace std;

int main(){
	int addhar[5];
	int *ptr=&addhar[0];
	for(int i=0;i<5;i++){
		cout<<i<<" index value enter:";
		cin>>ptr+1;
	}
	for(int i=0;i<5;i++){
		cout<<ptr+i<<endl;
	}
	
	return 0;
}
