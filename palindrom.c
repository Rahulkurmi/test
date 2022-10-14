#include<stdio.h>
int main(){
int a,rem,temp,sum=0;
printf("enter the value of a");
scanf("%d",&a);
temp=a;
while(a>0)
{
rem=a%10;
sum=(sum*10)+rem;
a=a/10;


}
if(temp==sum){
    printf("number is palindrom");
}
    else
    {
        printf("no is not palindrom");
    }
}


// #include<stdio.h>  
// int main()    
// {    
// int n,r,sum=0,temp;    
// printf("enter the number=");    
// scanf("%d",&n);    
// temp=n;    
// while(n>0)    
// {    
// r=n%10;    
// sum=(sum*10)+r;    
// n=n/10;    
// }    
// if(temp==sum)    
// printf("palindrome number ");    
// else    
// printf("not palindrome");   
// return 0;  
// }   