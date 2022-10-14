#include<stdio.h>
#include<string.h>
int main(){
char a[50];
printf("enter the name");
scanf("%[^\n]",a);
int len=strlen(a);
int i,temp;
for(i=0;i<=len/2;i++)
{
temp=a[i];
a[i]=a[len-i-1];
a[len-i-1]=temp;



}

printf("%s",a);



}