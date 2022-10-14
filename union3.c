#include<stdio.h>
union student{
int roll;
int class;


}s1;
int main(){
    printf("enter the roll : ");
    scanf("%d",&s1.roll);
printf("enter the class : ");
    scanf("%d",&s1.class);
    printf("the roll no is %d\n",s1.roll);
printf("the class is %d\n",s1.class);




}


//write a short note on malloc and calloc
//wrire a short not on free()and realloc();