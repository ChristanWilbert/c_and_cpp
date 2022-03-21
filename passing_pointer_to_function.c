
#include <stdio.h>
#include <math.h>

void display(int *a,int *b,int *c,int *d);
float sinx(float *x);
float cosx(float *x);
float tanx(float *x);
int main()
{
    //Do the prefix and postfix assignment inside the function and print the values in the main for the pointer argument
    int a=10,b=10,c=10,d=10;
    display(&a,&b,&c,&d);
    printf("Passing pointers to function!\n\n");
    printf("Value a is: %d\n",a);
    printf("Value b is: %d\n",b);
    printf("Value c is: %d\n",c);
    printf("Value d is: %d\n",d);

    // Do the Sin, Cos and Tan calculation of the values using the above method 

    float theta,sin,cos,tan;
    printf("Enter theta value in radians: ");
    scanf("%f",&theta);
    printf("sin(%f) = %f",theta,sinx(&theta));
    printf("\ncos(%f) = %f",theta,cosx(&theta));
    printf("\ntan(%f) = %f",theta,tanx(&theta));
    return 0;
}
void display(int *a,int *b,int *c, int *d)
{
  ++*a;
  *b++;
  --*c;
  *d--;
  return;
}
float sinx(float *x){
    return sin(*x);
}
float cosx(float *x){
    return cos(*x);
}
float tanx(float *x){
    return tan(*x);
}
//Christan Wilbert
