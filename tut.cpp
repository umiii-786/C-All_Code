# include <iostream>
using namespace std;
int main(){
char str[100];
int countsp=0;
int countnum=0;
int countalpha=0;
printf("enter the string :");
gets(str);
for(int i=0;str[i]!='\0';i++){
if(str[i]==' '){
++countsp;
}
if(str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' ||str[i]=='8'|| str[i]=='9'|| str[i]=='0'){
countnum++;
}
if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' ){
    countalpha++;
}
}
cout<<"there are "<<countsp<<" space and "<<countnum<<" digit and "<<countalpha<<" in your string";
    return 0;
}