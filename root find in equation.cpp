#include<iostream>
using namespace std;
int find_root(int a,int b,int c);
void show_nature(int rot);
int main(){
	int a,b,c,root;
	cin>>a;
	cin>>b;
	cin>>c;
	 root=find_root(a,b,c);
cout<<" the roots of the equation are "<<endl;
 show_nature(root);
return 0;
	
}
int find_root(int a,int b,int c){
	return (b*b)-4*(a*c);
}
void show_nature(int rot){
	if(rot==0){
		cout<<" roots are real and equal ";
	}
	else if(rot>0){
		cout<<" roots are real and unequal ";
	}
	else{
		cout<<" roots are imaginary ";
	}
}
