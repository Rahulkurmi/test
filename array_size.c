#include<stdio.h>
int main()
{
int a[50];
int i,n;
printf("enter the n");
scanf("%d",&n);
for(i=0;i<=n;i++){
    printf("enter the element");
    scanf("%d",&a[i]);


}

printf("%lu",sizeof(a)/sizeof(int));

}