#include<stdio.h>
int rahul(int,int);
int main()
{
int a,b,ans;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
ans=rahul(a,b);
printf("%d",ans);

}
int rahul(int a,int b){
int sum;
sum=a+b;


return sum;
}