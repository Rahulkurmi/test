#include<stdio.h>
#include<string.h>
struct detail{
char name[10];
int model;
int price;
char color[50];

};

int main(){

int n,temp;
printf("enter the value of n");
scanf("%d",&n);
struct detail car[n];
int i,k=1,j;
for(i=0;i<=n;i++){
printf("enter the detail of %d car\n",k++);
printf("enter the name of car :");
scanf(" %s",car[i].name);
printf("enter the model of car :");
scanf("%d",&car[i].model);
printf("enter the price of car :");
scanf("%d",&car[i].price);
printf("enter the color of car :");
scanf(" %s",car[i].color);
}
//printf("car with price above 30k and color black\n");
// for(i=0;i<=n;i++)
// {
// if(car[i].price>30000 && strcmp(car[i].color,"black")==0 ){
//     printf("the name of the car %s\n",car[i].name);
//     printf("The model of the car %d\n",car[i].model);


//}


//}
for(i=0;i<=n;i++){
for(j=i+1;j<=n;j++){
    if(car[i].price>car[j].price)
    temp=car[i].price;
    car[i].price=car[j].price;
    car[j].price=temp;

    }
   

}
for(i=0;i<=n;i++)
printf("the namE OF THHE CAR IS %s",car[i].name);
 printf("the price of car %d",car[i].price);


}



