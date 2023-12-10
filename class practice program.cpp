#include<iostream>
#include<string>
using namespace std;
//class data{
//	private:
//	int age;
//	string name;
//	int roll_no;
//	
//	public:
//		void set(){
//			cout<<"enter your name :";
//			cin>>name;
//			cout<<"enter your roll no :";
//			cin>>roll_no;
//			cout<<"enter your age :";
//			cin>>age;
//		}
//		void print(){
//			cout<<" your name is "<<name<<endl;
//			cout<<" your roll no is "<<roll_no<<endl;
//			cout<<" your age is "<<age<<endl;
//		}
//	
//};


//class bank{
//	string name;
//	int branch_no;
//	string loc;
//	public:
//	bank(){
//		name="al-habib";
//		branch_no=243762;
//		loc="mariumroad";
//	}
//	void print(){
//		cout<<" bank name is "<<name<<endl;
//		cout<<" branch no is "<<branch_no<<endl;
//		cout<<" location is "<<loc<<endl;
//	}
//};
class uzair;
class umair{
	int rs;
	
	public:
	umair(){
		rs=30;
	}
	friend void danish(umair u1 , uzair uz1);
};
class uzair{
	int rs2;
	
	public:
	uzair(){
		rs2=20;
	}
	public:
		friend void danish(umair u1 , uzair uz1);
};

void danish(umair u1 ,uzair uz1){
	int total=u1.rs+uz1.rs2;
	cout<<" i have now "<<total<<" rupees "<<endl;
}
int main(){
	umair obj1;
	uzair obj2;
danish(obj1,obj2);

	
	
return 0;	
}
