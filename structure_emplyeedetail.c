#include<stdio.h>
struct emplyee{
char name[50];
char position[50];
int contact;
int salary;
} detail[50];
int main(){

    
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    int k=1;
    for(i=0;i<=n;i++){
 printf("enter detail of %d employes is :\n",k++);
printf("enter the name :");
scanf("%s",detail[i].name);
printf("enter the position :");
scanf("%s",detail[i].position);
printf("enter the salary :");
scanf("%d",&detail[i].salary);
printf("enter the contact :");
scanf("%u",&detail[i].contact);


    }
    for(i=0;i<=n;i++){
 printf("the detail of %d employes  :\n",i);
printf("%s\n",detail[i].name);
printf("%s\n",detail[i].position);
printf("%d\n",detail[i].salary);
printf("%d\n",detail[i].contact);


    }


}