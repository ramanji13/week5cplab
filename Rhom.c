#include<stdio.h>
int main() {
    int i,j,k,n,l=1,g,a;
    printf("enter any even number");
    scanf("%d",&n);
    int h=n;
    int b=n;
    for(i=1; i<=2*n+1; i++) {
        printf("%d",i);
    }
    printf("\n");
    for(i=1; i<=n; i++) {
        for(j=1; j<=n+1-i; j++) {
            printf("%d",j);
        }
        for(k=1; k<2*i; k++) {
            printf(" ");
        }
        for(g=h+2; g<=2*n+1; g++) {
            printf("%d",g);
        }
        h++;
        printf("\n");
    }
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            printf("%d",j);
        }
        for(k=2*n-1; k>=l; k--) {
            printf(" ");
        }
        l+=2;
        for(a=g-1; a<=n*2+1; a++) {
            printf("%d",a);
        }
        g--;
        printf("\n");
    }
    for(i=1; i<=2*n+1; i++) {
        printf("%d",i);
    }
    printf("\n");
}
