#include<iostream>
#include<conio.h>
using namespace std;

class array{
	private:
		int arr[5];
		public:
	void input();
	void print();
	int max();
	int min();
};

int main(){
	
	array arr;
	arr.input();
	cout<<"\t your given value is below "<<endl;
	arr.print();
	cout<<" the maximum value in our array is :"<<arr.max()<<endl;
	cout<<" the manimum value in our array is :"<<arr.min()<<endl;
	
	return 0;
}

void array::input(){
	for(int i=0;i<5;i++){
		cout<<" enter value of arr["<<i<<"] :";
		cin>>arr[i];
	}
}
void array::print(){
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
}
int array::max(){
	int m=arr[0];
	for(int i=1;i<5;i++){
		if(m<arr[i]){
			m=arr[i];
		}
	}
	return m;
}
int array::min(){
	int min=arr[0];
	for(int i=1;i<5;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	return min;
}
