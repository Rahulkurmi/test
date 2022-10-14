#include<stdio.h>
#include<stdlib.h>
int main(){
int i,n, *ptr;
printf("enter the value of n");
scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));
for(i=0;i<=n;i++){
printf("enter the pointer : ");
scanf("%d",(ptr+i));



}
for(i=0;i<=n;i++){
printf("%d\n",(*ptr+i));



}

free(ptr);

}