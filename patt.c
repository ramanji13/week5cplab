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


