#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
		cout<<"your given character is alphabet";
	}
	else{
		cout<<"your character is not a alphabet";
	}
	
	return 0;
}
