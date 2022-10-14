#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
char b[50];
int i;
printf("enter the string");
scanf("%s",a);
printf("enter the string");
scanf("%s",b);
int len1=strlen(a);
int len2=strlen(b);
for(i=0;i<=len1 && i<=len2;i++)
{
a[len1+i]=b[i];
}
printf("%s",a);


}