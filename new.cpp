#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=1;i<=n;i++){
		if(i==1 || i==5){
		  for(int j=1;j<=n+1;j++){
			 cout<<"*";
		}
		}
		else{
			cout<<"*";
			for (int k=1;k<n+1-1;k++){
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	}
}
