#include<stdio.h>
int main()
{
int a[50],n,key,i;
printf("enter the number of n");
scanf("%d",&n);
printf("enter the key");
scanf("%d",&key);
 printf("enter the element");
for(i=0;i<=n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
    if(a[i]==key)
    {
printf("the index of %d is %d",key,i);
//break;

    }



}




}