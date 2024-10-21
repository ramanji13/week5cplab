#include <stdio.h>

int main() {
 int i,n,count=0,j;
 printf("enter the value of n\n");
 scanf("%d",&n);
 for(i=2;i<=n;i++){
     count=0;
     for(j=1;j<=i;j++){
     if(i%j==0){
         count++;
     }
 }if(count==2){
  printf("%d is a prime number\n",i);
 }
 }
    return 0;
}
