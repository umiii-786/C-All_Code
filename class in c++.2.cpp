#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class bank{
	private :
		long int account_no;
		long int password;
    public:
    	string name;
    	void pass(){
    	cout<<" enter your password:";
    	cin>>password;
		}
		void account(){
    	cout<<" enter your account no :";
    	cin>>account_no;
		}
		void show(){
	    cout<<"your password is :"<<password<<endl;
	     cout<<"your account no is :"<<account_no;
		}
};


int main(){
	bank emp1;
	cout<<" enter your name :";
	cin>>emp1.name;
	emp1.pass();
	emp1.account();
	
	cout<<"your name is :"<<emp1.name<<endl;
    emp1.show();
	return 0;
}
