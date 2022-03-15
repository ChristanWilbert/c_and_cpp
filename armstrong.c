#include<stdio.h>
#include<math.h>
int* armstrong_nums(int *a);
int main(){
    int n;
    printf("Number of armstrong numbers to be printed = ");
    scanf("%d",&n);
    armstrong_nums(&n);
}
int* armstrong_nums(int *a){
    int count=0,x=1,power=1,m,sum,digits[5];m=x;
    int armstrong[*a],*r[*a];
    while (count<*a)
    {
        power=1;sum=0;m=x;
        while (x/((int)pow(10,power))!=0)
        {power++;}
        while (m>0)
        {
            sum+=pow(m%10,power);
            m=m/10;
        }
        if (sum==x)
        {
            armstrong[count]=x;
            count++;
        }
        x++;   
    } 

    for (int i = 0; i < *a; i++)
    {r[i]=&armstrong[i];}

    for (int i = 0; i < *a; i++)
    {
        printf("%d ",*r[i]);
    }
    
    return r[0];
}