#include<stdio.h>
#include<string.h>
struct car{
int id;
char name[50];
int price;
char color[50];
}detail[10];
int main(){
    int i,j,tmp,n;
    printf("enter the n : ");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf(" the serial number :");
scanf("%d",&detail[i].id);
printf(" the  name of  %d product :",i);
scanf("%s",detail[i].name);
printf(" the price of  %d product :",i);
scanf("%d",&detail[i].price);
printf(" the  color of  %d product : ",i);
scanf("%s",detail[i].color);

}
printf("product with price above 30k and black color :\n");
for(i=1;i<=n;i++){
if(detail[i].price>30000 && strcmp(detail[i].color,"black")==0)
{
      printf(" serial :%d\n",detail[i].id);
      printf("Name : %s\n",detail[i].name);
      printf("price : %d\n",detail[i].price);
        printf("color :%s\n",detail[i].color);

}
}
printf("thedetail arrangement according to increasing price:\n");
for(i=1;i<=n;i++){
  for(j=i+1;j<=n;j++){
if(detail[i].price>detail[j].price)
{
tmp=detail[i].price;
detail[i].price=detail[j].price;
detail[j].price=tmp;
}
  }
  printf("Price of product : %d\n",detail[i].price);
  }
  //   for(i=1;i<=n;i++){
  // for(j=i+1;j<=n;j++){
  // if(detail[i].price>detail[j].price){
  // printf(" serial numer : %d\n",detail[i].id);
  //  printf(" Name of product : %s\n",detail[i].name);

//printf("color of product : %s\n",s1[i].color);
  //}
  //}
  //}
//}e

}
//}

  //  }
//}
// // write a programm to create structure for following attributes 
// car(name,price,model,color)
// insert atleast 10 records,display car info which price is greater than 30k and color is equal to black. 