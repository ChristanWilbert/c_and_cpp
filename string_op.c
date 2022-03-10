#include <stdio.h>
#include <string.h>
void main(){
    char str1[50],str2[50];
    printf("Enter two strings:");
    scanf("%s %s",&str1,&str2);
    if (strcmp(str1,str2)==0)
    {
        printf("Both are same");
    }else{
        printf("Both are not same");
    }
    
}