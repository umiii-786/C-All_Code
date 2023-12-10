#include<iostream>
#include<string.h>
using namespace std;
class our{
	private:
		long int pass;
		float price;
		public:
	our(){
	pass=12345678;
	price=300.88;
    }
			our(long int n,float p);
			void show();
			
};
int main(){
	our ob1,ob2(215020,4500.77);
	cout<<" the content of first object is :"<<endl;
	ob1.show();
	cout<<" the coontent of second object is :"<<endl;
	ob2.show();
	
	
	
	return 0;
}


our::our(long int n,float p){
	pass=n;
    price=p;
}

void our::show(){
	cout<<"password ="<<pass<<endl;
	cout<<" price ="<<price<<endl;
	
}
