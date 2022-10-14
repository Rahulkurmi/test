#include<stdio.h>
int fib(int);
int main(){
int n,i,ans;
printf("enter the value of n");
scanf("%d",&n);
 
for(i=0;i<=n;i++)
{
    ans=fib(i);
    printf("%d",ans);
}


}
int fib(i){
if(i==0)
{
    return 0;
}
if (i==1)
{
    return 1;
}

else{
    return fib(i-1)+fib(i-2);
}

}
