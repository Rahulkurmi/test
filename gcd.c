#include<stdio.h>
int gcd(int,int);
int main()
{
int a,b,rest;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
rest=gcd(a,b);

printf("%d",rest);

}
int gcd(int a,int b){

if(b==0)
return a;
else
return(b%a);

}
