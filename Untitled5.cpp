#include<iostream>
#include<string>
using namespace std;

void printtable(char);
int main(){
	char ch;
	cout<<"enter the which characher you want tu print :";
	cin>>ch;
	printtable(ch);
	
	
	
	return 0;
}

void printtable(char ch){
	int number;
	cout<<"enter the how many long you want tu draw :";
	cin>>number;
	for(int i=1;i<=number;i++){
		for(int j=1;j<=number;j++){
			cout<<" ";
		}
		if(i==1 || i==number){
			for(int k=1;k<=number;k++){
				cout<<ch;
            }
		}
		if(i>1 && i<number){
			cout<<ch;
			for(int j=2;j<number;j++){
				cout<<" ";
			}
			cout<<ch;
		}
		cout<<endl;
	}	
}
