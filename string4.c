#include<stdio.h>
#include<string.h>
int main()
{
char a[50],ans;
char b[50];
printf("enter the a");
scanf("%s",a);
printf("enter the b");
scanf("%s",b);
int len1=strlen(a);
int len2=strlen(b),i;
for(i=0;i<=len1 || i<=len2;i++)
{

a[len1+i]=b[i];



}

printf("%s",a);



}