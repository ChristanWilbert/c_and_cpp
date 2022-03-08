#include<stdio.h>
void main(){
    int n;
    printf("width (odd)= ");
    scanf("%d",&n);
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<(n/2)*2-2*i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++){
            printf(" *");
        }
        printf("\n");
    }
    for(int i=0;i<(n-1)/2;i++){
        for(int j=0;j<i+1;j++){
            printf("  ");
        }
        for(int k=0;k<n-2*(i+1);k++){
            printf(" *");
        }
        printf("\n");
    }
}