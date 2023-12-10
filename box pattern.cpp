#include<iostream>
using namespace std;

int main(){
	int number;
	cout<<" enter the number :";
	cin>>number;
	for(int i=1;i<=number;i++){
		
		for(int j=1;j<=number;j++){
			cout<<" ";
		}
		if(i==number || i==1){
	for(int l=1;l<=number;l++){
		cout<<"*";
	}	
}
		
		if(i>1 && i<number){
			cout<<"*";
				for(int i=1;i<=(number-2);i++){
					cout<<" ";
				}
				cout<<"*";
			}
			cout<<endl;
}
	return 0;
}
