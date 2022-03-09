
/* Search the given element in the array and print it's position*/
/* Check whether the array has non zero values in a position*/
/* Create one more ID array and compare the two ID arrays for values*/
/* Create one more ID character array and compare the two ID char arrays for values*/
/* Find the sum of all elements in an array*/
/* Find the maximum number of elements in an array*/
/* Find the minimum number of elements in an array*/

#include <stdio.h>
void main(){
    int array[20]={23,4,5,34,22,78,76};
    for(int i=0;i<20;i++){
        printf("%d ",array[i]);
    }

    // Insert one element into the array 
    int pos,element;
    printf("\nEnter element to insert: ");
    scanf("%d",&element);
    printf("\nEnter position to insert: ");
    scanf("%d",&pos);
    for (int i = 19; i > pos-1; i--){
        array[i]=array[i-1];
    }
    array[pos-1]=element;
    for(int i=0;i<20;i++){
        printf("%d ",array[i]);
    }

}