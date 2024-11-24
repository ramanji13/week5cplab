#include<stdio.h>
int main() {
    int i,j,a=1,n;
    printf("enter any odd number");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        if(i%2!=0)a=1;
        else a=0;
        for(j=1; j<=i; j++) {

            printf("%d",a);
            if(a==0)a=1;
            else a=0;
        }

        printf("\n");
    }
}
1
01
101
0101
10101
