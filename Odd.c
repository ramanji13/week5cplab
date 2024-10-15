#include <stdio.h>

int main() {
    int i=0,n;
    printf("enter the value of n\n");
     scanf("%d",&n);
     while(i<=n){
         i++;
         if(i%2==0)
         
         continue;
         printf("%d\n",i);
         
     }
    return 0;
}
