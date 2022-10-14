#include<stdio.h>
struct organization{

char organization_name[50];

int numberofemployee;

};

struct detail
{
char nameofemployee[50];

int salary;

struct organization org;
}det[5];


int main()
{
int i;
for(i=0;i<=4;i++)
{
printf("enter the name of the organization :");
scanf("%s",det[i].org.organization_name);


printf("enter the name of the employee : ");
scanf("%s",det[i].nameofemployee);


}


for(i=0;i<=4;i++)

{

printf("%s\n",det[i].org.organization_name);

printf("%s\n",det[i].nameofemployee);

}

}