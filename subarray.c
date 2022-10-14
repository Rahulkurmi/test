// 
#include<stdio.h>
int main(){
int n,i;
printf("enter n");
scanf("%d",&n);
int a[3];
int length=sizeof(a);
for(i=0;i<n;i++){
    printf("enter the arr");
    scanf("%d",&a[i]);

}
printf("%d",length/sizeof(int));



}