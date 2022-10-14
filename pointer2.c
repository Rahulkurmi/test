#include<stdio.h> //<stio.h>
int main(void){
int a=10; //int a :=10; mistake 
int b=34; //int b:=34; mistake
int *p1=&a; //*a &p1
int *p2=&b; //*b &p2
*p1=*p1+*p2;//p1-p2
*p2=*p1-*p2;//
*p1=*p1-*p2;
printf(" the swapped value is %d\n",*p1);
printf(" the swapped value is %d\n",*p2);




}