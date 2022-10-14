#include<stdio.h>
int main(){
int i,j,a[50],temp,count=0;
int n;
printf("enter the element");
scanf("%d",&n);
for(i=0;i<=n;i++){
    printf("enter the element");
    scanf("%d",&a[i]);
}
for(i=0;i<=n;i++){
    for(j=i+1;j<=n;j++){
        if(a[i]!=a[j] && a[i]!=0)
        {
            temp=a[i];
            a[i]=0;
            printf("the unique element is %d\n",temp);

        
        }
        else if(temp!=a[j])
        a[j]=0;
    }
  
    }
}
//     for(i=0;i<=n;i++){
//     for(j=i+1;j<=n;j++){
//         if(a[i]==a[j] )
//         count++;

//     }
//     }
//     printf("numebr of dupicate element %d",count);
// }