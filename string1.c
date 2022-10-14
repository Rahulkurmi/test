#include<stdio.h>
#include<string.h>
int main(){

char c[50];
printf("enter the name");
scanf("%[^\n]",c);
printf("%s",c);
printf("%s",strrev(c));
return 0;
}