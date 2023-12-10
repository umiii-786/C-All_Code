#include<stdio.h>

char *str3(char**, char**);

int main()
{
    char *str;
    char *str2;

    str3(&str,&str2);
    printf("%s\n",str);
    printf("%s",str2);
    
    return 0;
}

char *str3(char **str,char **str2)
{
    *str="Hello";
    *str2="To The World";
}