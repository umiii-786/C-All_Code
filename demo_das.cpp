#include<iostream>
#include<string>
using namespace std;

//class student{
//	int age;
//	string name;
//	
//	public:
//	student(){
//		cout<<"hello world ";
//	}	
//	void setinfo(){
//		cout<<"enter your name :";
//		cin>>name;
//		cout<<"\n";
//		
//		cout<<"enter your age :";
//		cin>>age;
//		
//		
//	}
//	string getname(){
//		return name;
//	}
//	
//};

int main(){
	char a='4';
	char*b=&a;
	char**name=&b;
	
	cout<<*name;
//	int*a = new int[2];
//	a[0]=22;
//	a[1]=54;
//	a[2]=245;
//	
//	
//	cout<<*(a+2);
	
	
//	student obj=new student();
//	obj.setinfo();
//    for(int i=0;i<10;i++) {	
//    	cout<<"enter the element "<<i+1<<"  :";
//    	cin>>p[i];
//    	cout<<"\n";	
//	}
//	
//	for(int i=0;i<10;i++){
//		cout<<"the element at index "<<i+1<<" is "<<p[i]<<"\n";
//	}
	
	
	return 0;
}
