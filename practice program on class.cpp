#include<iostream>
#include<conio.h>
using namespace std;

class book{
	private:
		int bookid,pages;
		float price;
		
	public:
	void get(){
	cout<<"enter book id =";
	cin>>bookid;
	cout<<" enter pages :";
	cin>>pages;
	cout<<" enter price of book :";
	cin>>price;
	}
	
	void set(int id,int pg,float pri){
		bookid=id;
		pages=pg;
		price=pri;
	}
	void show(){
		cout<<" book id ="<<bookid<<endl;
		cout<<" book pages ="<<pages<<endl;
		cout<<" price ="<<price<<endl;
	}
	float getprice(){
		return price;
	}
};

int main(){
	book b1,b2;
	b1.get();
	b2.set(2,500,2000.0);
	cout<<" the detail of expensive book is given below "<<endl;
	if(b1.getprice() > b2.getprice()){
	b1.show();
	}
	else{
		b2.show();
}
	return 0;
}
