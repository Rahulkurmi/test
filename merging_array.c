#include<stdio.h>
int main()
{
int a[50];
int b[50];
int n,m,temp;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the value of m");
scanf("%d",&m);
int i;
for(i=0;i<=n;i++)
{
printf("enter the value of a");
scanf("%d",&a[i]);
}
for(i=0;i<=m;i++){
printf("enter the value of b");
scanf("%d",&b[i]);

}
for(i=0;i<=n && i<=m;i++){
a[n+i+1]=b[i];


}
 

for(i=0;i<=n;i++)
{
    printf("%d",a[i]);
 
}
  

}