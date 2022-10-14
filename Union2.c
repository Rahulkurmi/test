#include<stdio.h>
union student{
char name[50];
int roll;
int class;
}s1;
struct player{
int a;
char name;

}s2;
int  main(){

printf("the size of union is %lu\n",sizeof(s2));
printf("the size of stucture %lu\n",sizeof(s1));


}