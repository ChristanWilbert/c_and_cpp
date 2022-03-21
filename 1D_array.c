#include<stdio.h>
void main(){
int size,array[50];
    printf("Enter number of elements: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("array = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    

    // Insert 1 element into the array 
    int element,pos;
        printf("\nEnter element and its position for insertion: ");
        scanf("%d %d",&element,&pos);
        for (int i = size; i > pos-1; i--){
        array[i]=array[i-1];
        }
        array[pos-1]=element;
        size++;
        for(int i=0;i<size;i++){
            printf("%d ",array[i]);
        }
            
    

    // Insert the given number of elements into the array
    int n;
    printf("\nEnter total number of insertions: ");
    scanf("%d",&n);
    for (int i=0; i < n; i++)
    {
        printf("\nEnter element and its position : ");
        scanf("%d %d",&element,&pos);
        for (int i = size; i > pos-1; i--){
        array[i]=array[i-1];
        }
        array[pos-1]=element;
        size++;
        for(int i=0;i<size;i++){
            printf("%d ",array[i]);
        }
            
    }


    /* Remove the duplicate elements in an array*/
    
    int flag,new[50],z=0;
     for (int i=0; i<size; i++){
         flag=0;
        for (int j = 0; j < z; j++)
        {
            if (array[i]==new[j])
            {
                flag+=1;
                break;
            }
        }
        if (flag==0){
            new[z]=array[i];
            z++;
        }
    }
    size=z;
    printf("\nAfter removing duplicate elements\n array = ");
    for(int i=0;i<size;i++){
        array[i]=new[i];
        printf("%d ",array[i]);
    }


    /* Remove one element from the array */

    printf("\nEnter element to be deleted: ");
    scanf("%d",&element);
    for (int i = 0; i < size; i++)
    {
        if (array[i]==element)
        {
            for (int j = i; j < size-1; j++)
            {
                array[j]=array[j+1];
            }
            size--;
            break;
        }
        
    }
    printf("\narray = ");
    for(int i=0;i<size;i++){
            printf("%d ",array[i]);
        }


    /* Search the given element in the array and print it's position*/

    printf("\nEnter element to be located: ");
    scanf("%d",&element);
    for (int i = 0; i < size; i++)
    {
        if (array[i]==element)
        {
            printf("\nposition of element is %d",i+1);
            break;
        }
    }
    
    /* Check whether the array has non zero values in a position*/

    printf("\nEnter position to check for non-zero value: ");
    scanf("%d",&element);
    if (array[element-1]!=0)
        {
            printf("contains non-zero element");
        }else{
            printf("element is 0");
        }
    

    /* Create one more ID array and compare the two ID arrays for values*/
    int array2[50];
    printf("\nEnter %d elements for new array",size);
    for(int i=0;i<size;i++){
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&array2[i]);
    }
    printf("array2 = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array2[i]);
    }
    printf("\ncomparing array and array2 for values if same then 1 else 0\n Result = ");
    for (int i = 0; i < size; i++)
    {
        if (array[i]==array2[i])
        {
            printf("1 ");
        }
        else
        {printf("0 ");}
    }
    
    /* Create one more ID character array and compare the two ID char arrays for values*/
    char str1[50],str2[50];int length;
    printf("\nEnter length of character array: ");
    scanf("%d",&length);
    printf("\nEnter %d character elements for str1\n",length);
    for(int i = 0; i < length; i++)
    {
        scanf("%s",&str1[i]);
    }
    printf("\nEnter %d character elements for str2\n",length);
    for(int i = 0; i < length; i++)
    {
        scanf("%s",&str2[i]);
    }
    printf("Comparing elements of str1 and str2 ");
    for (int i = 0; i < length; i++)
    {
        if (str1[i]==str2[i])
        {
            printf("1 ");
        }
        else
        {printf("0 ");}
    }
    
                               
                         
    /* Find the sum of elements,the maximum and the minimum of elements in an array*/
    int array3[50],size2,sum,max=0,min;
    printf("\nEnter size of new integer array: ");
    scanf("%d",&size2);
    printf("Enter %d elements for new array",size2);
    for(int i=0;i<size2;i++){
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&array3[i]);
    }
    printf("array3 = ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ",array3[i]);
        sum+=array3[i];
        if(max<array3[i]){max=array3[i];}
        if(min>array3[i]){min=array3[i];}
        printf("%d",max);
    }
    printf("\nsum = %d\n max value = %d\n min value = %d",sum,max,min);

}
//Christan Wilbert 

 



