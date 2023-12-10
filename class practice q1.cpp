#include<iostream>
#include<conio.h>
using namespace std;

class binary{
	private:
	char bina[];
	public:
		void read();
		void check();
		void ones();
		void display();
		
};

int main(){
	binary b1;
	b1.read();
	b1.check();
	b1.display();
	b1.ones();
	b1.display();
	
	return 0;
}

void binary::read(){
	cout<<" enter the binary number :";
	cin>>bina;
}
void binary::check(){
	for(int i=0;bina[i]!='\0';i++){
		if(bina[i]!='0' && bina[i]!='1'){
			cout<<" given number is not a binary "<<endl;
	     break;
		}
	}
}

void binary::display(){
	for (int i=0;bina[i]!='\0';i++){
		cout<<bina[i];
	}
	cout<<endl;
}
void binary::ones(){
	for(int i=0;bina[i]!='\0';i++){
		if(bina[i]=='0'){
			bina[i]=='1';
		}
		else{
			bina[i]='0';
		}
	}
}
