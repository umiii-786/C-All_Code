#include<iostream>
#include<string.h>
using namespace std;

class car{
	char name[10];
	char model[];
	int price;
	public:
		car(char n[],char m[],int p);
		void change(char na[],char md[],int pr);
		void display();
};
car::car(char n[],char m[],int p){
	strcpy(name,n);
	strcpy(model,m);
	price=p;
}

int main(){
	
	car c("mehran","2002",1250);
	cout<<" your given data before change is :"<<endl;
	c.display();
	c.change("corolla","2001",5600);
	cout<<" your data is after change :"<<endl;
	c.display();
	
	return 0;
}


void car::change(char na[] ,char md [],int pr){
	strcpy(name,na);
	strcpy(model,md);
	price=pr;
}
void car::display(){
	cout<<"name of car is "<<name<<endl;
	cout<<"model of car is "<<model<<endl;
	cout<<"price of car is "<<price<<endl;
}
