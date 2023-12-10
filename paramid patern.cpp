#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the number how long you want to print the paramid :";
	cin>>num;
	for(int j=1;j<=num;j++){
		
		for(int i=num;i>=j;i--){
		   cout<<" ";
		}
		for(int i=1;i<=(j*2)-1;i++){
			cout<<"*";
		}	
    	cout<<endl;
	}
	
	return 0;
}
