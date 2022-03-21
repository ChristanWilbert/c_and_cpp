#include <stdio.h>
int main(){
    // Define char array , find the ASCII values and store the same in the second array and print both along with the addresses

    char str[12]={"Good_Morning"},*p1[12];
    int ascii[12],*p2[12];
    for (int i = 0; i <12; i++)
    {
        p1[i]=&str[i];
        ascii[i]=(int)(*p1[i]);
        p2[i]=&ascii[i];
    }

    for (int i = 0; i <12; i++)
    {
        printf("character: %c\taddresses: %x\nascii: %d\taddress: %x\n\n",*p1[i],p1[i],*p2[i],p2[i]);
    }

    // Defind a float array, Define a char array, store the items and price in both. get the total price of purchased items. 
    char items[][20]={{"apple"},{"mango"},{"banana"}};
    float prices[3]={20.2,33,91},total,*price[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%s = %.2f\n",items[i],prices[i]);
        price[i]=&prices[i];
        total+=*price[i];
    }
    printf("Total price is %.2f",total);
    

    return 0;
}