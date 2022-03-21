#include<stdio.h>
void main(){
int size[2],array[50][50];
    printf("Enter size of 2D array (columns rows): ");
    scanf("%d %d",&size[0],&size[1]);
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("Enter elements for row %d: ",j+1);
            scanf("%d",&array[j][i]);
        }
    }
    printf("array = \n");
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }

    int a=size[0]*size[1];
    int elements[a],count=0;
    /* Update the elements in all the odd numbered position of the array
    
    printf("Enter %d elements to update odd positions of the array",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&elements[i]);
    }
    
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i=i+2){
            array[j][i]=elements[count];
            count++;
        }
    }
    printf("array = \n");
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }*/


    /* insert the elements in all the odd numbered position of the array*/

    printf("Enter %d elements to insert to odd positions of the array",a);
    count=0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&elements[i]);
    }
    size[0]=size[0]*2;
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i=i+2){
            for (int k = size[0]; k > i; k--){
        array[j][k]=array[j][k-1];
        }
            array[j][i]=elements[count];
            count++;

        }
    }
    printf("array = \n");
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }



     /*insert the elements in all the even numbered position of the array*/
     a=size[0]*size[1];
     count=0;
    printf("Enter %d elements to insert to even positions of the array",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&elements[i]);
    }
    size[0]=size[0]*2;
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=1;i<size[0];i=i+2){
            for (int k = size[0]; k > i; k--){
        array[j][k]=array[j][k-1];
        }
            array[j][i]=elements[count];
            count++;

        }
    }
    printf("array = \n");
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }






/* delete the elements in all the odd numbered position of the array*/
printf("\n After deleting all elements at odd positions");

    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i=i+1){
            for (int k = i; k < size[0]-1; k++){
        array[j][k]=array[j][k+1];
        }
        }
    }
    size[0]=size[0]%2?(size[0]-1)/2:size[0]/2;
    printf("array = \n");
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }



     /*delete the elements in all the even numbered position of the array*/
     printf("\n After deleting all elements at even positions");
     for (int j = 0; j < size[1]; j++)
    {    
        for(int i=1;i<size[0];i=i+1){
            for (int k = i; k < size[0]-1; k++){
        array[j][k]=array[j][k+1];
        }
        }
    }
    size[0]=size[0]%2?(size[0]-1)/2:size[0]/2;
    printf("array = \n");
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }


    /* Search the given element in the array and print it's position*/
    
    int element;
    printf("\nEnter element to be located: ");
    scanf("%d",&element);


    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            if (array[j][i]==element)
        {
            printf("\nposition of element is row %d column %d",j+1,i+1);
            break;
        }
            
        }
    }
    printf("\narray = \n");
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }


    
    /* Check whether the array has non zero values in a position*/

    printf("\nEnter position to check for non-zero value(row column): ");
    scanf("%d %d",&elements[0],&elements[1]);
    
    if (array[elements[0]-1][elements[1]-1]!=0)
        {
            printf("contains non-zero element");
        }else{
            printf("element is 0");
        }

    
    

    /* Create one more ID array and compare the two ID arrays for values*/
    int array2[50][50];
    printf("\nEnter %d elements for new array",size[0]*size[1]);

    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("\nEnter element for row %d: ",j+1);
            scanf("%d",&array2[j][i]);
        }
    }
    printf("\narray2 = \n");
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("%d ",array2[j][i]);
        }
        printf("\n");
    }
    printf("\ncomparing array1 and array2 (values if same then shows 1 otherwise 0)\n");

    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
        if (array[j][i]==array2[j][i])
        {
            printf("1 ");
        }
        else
        {printf("0 ");}
        }
        printf("\n");
    }

    
    /* Create one more ID character array and compare the two ID char arrays for values*/
    char str1[50][50],str2[50][50];int length;
    printf("\nEnter number of strings: ");
    scanf("%d",&length);
    printf("\nEnter %d strings for str1\n",length);
    for(int i = 0; i < length; i++)
    {
        scanf("%s",&str1[i]);
    }
    printf("\nEnter %d character elements for str2\n",length);
    for(int i = 0; i < length; i++)
    {
        scanf("%s",&str2[i]);
    }
    for(int i = 0; i < length; i++)
    {
        printf("%s",&str1[i]);
    }
    printf("Comparing elements of str1 and str2 \n");
    for (int i = 0; i < length; i++)
    {
        int j=0,flag=0;
        for (int j = 0; j < 50; j++)
        {
             
        if (str1[i][j]!=str2[i][j])
        {
            printf("0 ");
            flag=1;
            break;
        }
    }
    if(flag==0){printf("1 ");}
    }
    
                               
                         
    /* Find the sum of elements,the maximum and the minimum of elements in an array*/
    int array3[50][50],size2,sum,max=0,min;
    printf("\nEnter size of new integer array (rows columns): ");
    scanf("%d %d",&size[0],&size[1]);
    printf("Enter %d elements for new array",size[0]*size[1]);
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("Enter elements for row %d: ",j+1);
            scanf("%d",&array3[j][i]);
        }
    }
    printf("array3 = \n");
    for (int j = 0; j < size[1]; j++)
    {    
        for(int i=0;i<size[0];i++){
            printf("%d ",array3[i][j]);
            sum+=array3[i][j];
            if(max<array3[i][j]){max=array3[i][j];}
            if(min>array3[i][j]){min=array3[i][j];}
            printf("%d",max);
    }
        printf("\n");}
    
    printf("\nsum = %d\n max value = %d\n min value = %d",sum,max,min);

}
//Christan Wilbert 

