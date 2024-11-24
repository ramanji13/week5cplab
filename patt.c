//print j values
#include<stdio.h>
#include<math.h>
int main()
{
int i,j,n;
printf ("enter the value of n \n");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++){          //if         for(j=n;j>=i;j--) print j value in a decreasing coloumn order
  
  printf("%d\t",j);
  }printf("\n");
  }
  }
//print i values
#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)           
  {
   for(j=1;j<=n;j++)             //if         for(j=n;j>=i;j--) print i value in a decreasing coloumn order
   {
   printf("%d\t",i);
   }
   printf("\n");
   }
}
//print stars in different format by changing values
#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,n;                                           
  printf("enter the value of n\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   for(j=n;j>=i;j--)
   {
   printf("*\t");
   }
   printf("\n");
   }
}
//print numbers in lines
#include<stdio.h>
int main()
{
  int i,j,n,t=1;
  printf("enter the limit :\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
   {
    printf("%d\t",t);
    t++;
    }
    printf("\n");
    
    }
}
//abc in pattern format
#include<stdio.h>
#include<math.h>
int main()
{
  char i,j,n,k;
  printf("enter the value of n\n");
  scanf("%c",&n);
  for(i=65;i<=n;i++)
  {
   for(j=n;j>=i;j--){
   
   printf("%c ",j);
   }
  
   printf("\n");
   }
   }

#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter value for number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    printf("%d",j);
    }printf("\n");
}
}
#include<stdio.h>

int main()
{   int i,j,n,number=1;
    printf("enter value for number of rows");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            printf("%d",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
