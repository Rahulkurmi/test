#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    a=a+b;//25
    b=a-b;//25-13=12
    a=a-b;//25-12=13
    printf("%d\n",a);
    printf("%d\n",b);
}