#include<iostream>
#include<string>
using namespace std;
class data{
	private:
		int password;
		string email;
	public:
		string name;
		int age;
		void pass(){
			cout<<"enter the password";
			cin>>password;
	}
		void email(){
			cout<<" enter the email address:";
			cin>>email;
	}
};

int main(){
	data p1;
	p1.name="umair";
	p1.age=18;
	p1.pass();
	p1.email();
	

	return 0;
}
