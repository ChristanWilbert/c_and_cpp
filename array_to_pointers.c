#include<stdio.h>
#include<math.h>
int main(){

    //Printing values in 2 arrays using pointers to array.
    int array1[5]={1,2,3,4,5},array2[6]={5,3,6,6,456,43};
    int *p1,*p2;
    p1=&array1[0];
    p2=&array2[0];
    printf("\narray1 = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\narray2 = ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",*(p2+i));
    }

    //printing square of fibonacci numbers
    int a=0,b=1,c=0,fibo[20]={0,1};
    int *point=fibo;
    for (int i = 0; i < 18; i++)
    {
        c=a+b;
        fibo[2+i]=c;
        a=b;
        b=c;
    }
    printf("\nSquare of fibonacci numbers: ");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ",(int)pow(*(point+i),2));
    }
    
    
}