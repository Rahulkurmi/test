#include<stdio.h>
int main()
{
    int row;
    printf("please enter the number of the row:");
    scanf("%d",&row);
    int i ,j;
    
    for(i=0;i<row;i++)
    { 
        for(j=i;j<row;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
       
        printf("\n");
    }
return 0;
}

