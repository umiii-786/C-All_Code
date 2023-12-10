#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;

int mian(){
   fstream f;
   f.open("sample.txt",ios::in);
   if(!f){
   	cout<<"file does not exist ";
   }
   else{
   char ch;
   f>>ch;
   cout<<ch;
   f.close();
}

   getch();
   return 0;
}
