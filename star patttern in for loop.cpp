#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number :";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-1;j++){
			cout<<" ";
		}
		if(i==1){
			cout<<" "<<"*";
		}
		for(int k=1;k<=i+2;k++){
			cout<<" "<<"*";
		}
		cout<<endl;	
	}
	
	//new for loop is using 
/*	for(int i=1;i<=n;i++){
		
		if(i!=1){
		for(int k=1;k<=n-i;k++ ){
		cout<<" ";
		}
		}
		
		for(int k=n;k>=1;k++ ){
			cout<<k<<" ";
		}
	cout<<endl;	
	}*/
	
	
	
	return 0;
}
