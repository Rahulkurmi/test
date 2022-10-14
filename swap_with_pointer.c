#include<stdio.h>
int main(){
int a,b;
int *p1=&a,*p2=&b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
*p1=*p1+*p2;
*p2=*p1-*p2;
*p1=*p1-*p2;
printf("%d\n",*p1);
printf("%d\n",*p2);




}