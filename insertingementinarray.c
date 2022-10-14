#include<stdio.h>
int main()
{
int a[50],i,n;
printf("enter the number of n :");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("enter the numbr of element");
scanf("%d",&a[i]);
}
int num,index;
//printf("enter the number");
//scanf("%d",&num);
printf("enter the index");
scanf("%d",&index);
for(i=index;i>=n;i--){
a[i]=a[i+1];


}
n--;
//a[index]=num;
for(i=0;i<=n;i++)
{
    printf("%d\n",a[i]);
}



}