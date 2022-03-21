#include<stdio.h>
int main(){
    int array[50][50][50],size[3];
    printf("Enter size of 3d array : ");
    scanf("%d %d %d",&size[0],&size[1],&size[2]);
    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            for (int k = 0; k < size[2]; k++)
            {
                printf("array[%d][%d][%d] = ",i,j,k);
                scanf("%d",&array[i][j][k]);
            }
            
        }
        
    }

    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            for (int l = i; l >0; l--)
            {printf("\t");}
            
            for (int k = 0; k < size[2]; k++)
            {
                printf("%d ",array[i][j][k]);
            }
            printf("\n");
        }
        
    }


    /* insert the given number of elements into the specified position of 
    the array such as first, last, mid*/

    int count,position[3],data;
    printf("Enter the number of elements to be inserted/updated: ");
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter location to insert/update.");
        scanf("%d %d %d",&position[0],&position[1],&position[2]);
        printf("Enter number to insert/update.");
        scanf("%d",&data);
        array[position[0]][position[1]][position[2]]=data;        
    }
    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            for (int l = i; l >0; l--)
            {printf("\t");}
            
            for (int k = 0; k < size[2]; k++)
            {
                printf("%d ",array[i][j][k]);
            }
            printf("\n");
        }
        
    }
    

    /* Remove the given number of elements from the array  */
   /* Remove the given number of elements from the specified position of 
    the array such as first, last, mid*/
    printf("Enter the number of elements to delete element: ");
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter location to delete element.");
        scanf("%d %d %d",&position[0],&position[1],&position[2]);
        array[position[0]][position[1]][position[2]]=0;      
    }
    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            for (int l = i; l >0; l--)
            {printf("\t");}
            
            for (int k = 0; k < size[2]; k++)
            {
                printf("%d ",array[i][j][k]);
            }
            printf("\n");
        }
        
    }


    /* Check whether the array has non zero values in a position*/
    int elements[3];
    printf("\nposition of element to check if non zero [][][]:");
    scanf("%d %d %d",&elements[0],&elements[1],&elements[2]);
    if (array[elements[0]][elements[1]][elements[2]]==0)
    {
        printf("element is 0\n");
    }else{
        printf("element is non-zero\n");
    }

    /* Create one more 3D array and compare the two 3D arrays for values*/

    int array2[50][50][50];
    printf("Enter elements for the new 3d array of size %dx%dx%d\n",size[0],size[1],size[2]);
    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            for (int k = 0; k < size[2]; k++)
            {
                printf("array2[%d][%d][%d] = ",i,j,k);
                scanf("%d",&array2[i][j][k]);
            }
            
        }
        
    }
    printf("array2 = \n");
    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            for (int l = i; l >0; l--)
            {printf("\t");}
            
            for (int k = 0; k < size[2]; k++)
            {
                printf("%d ",array2[i][j][k]);
            }
            printf("\n");
        }
        
    }
    printf("comparing array and array2 (1 if matching else 0)\n");
    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            for (int l = i; l >0; l--)
            {printf("\t");}
            
            for (int k = 0; k < size[2]; k++)
            {
                if(array[i][j][k]==array2[i][j][k])
                {printf("1 ");}else{
                    printf("0 ");
                }
            }
            printf("\n");
        }
        
    }

    /* Create one more ID character array and compare the two ID char arrays for values*/

    char str1[50][50][50],str2[50][50][50];
    int size2[3];
    printf("Enter the size for character array [][][]: \n");
    scanf("%d %d %d",&size2[0],&size2[1],&size2[2]);
    printf("Enter elements for the str1 3d character array");
    for (int i = 0; i < size2[0]; i++)
    {
        for (int j = 0; j <size2[1]; j++)
        {
            for (int k = 0; k < size2[2]; k++)
            {
                printf("str1[%d][%d][%d] = ",i,j,k);
                scanf("%s",&str1[i][j][k]);
            }
            
        }
        
    }
    printf("str1  = \n");
    for (int i = 0; i < size2[0]; i++)
    {
        for (int j = 0; j <size2[1]; j++)
        {
            for (int l = i; l >0; l--)
            {printf("\t");}
            
            for (int k = 0; k < size2[2]; k++)
            {
                printf("%c ",str1[i][j][k]);
            }
            printf("\n");
        }
        
    }


    printf("\nEnter elements for the str2 3d character array");
    for (int i = 0; i < size2[0]; i++)
    {
        for (int j = 0; j <size2[1]; j++)
        {
            for (int k = 0; k < size2[2]; k++)
            {
                printf("str2[%d][%d][%d] = ",i,j,k);
                scanf("%s",&str2[i][j][k]);
            }
            
        }
        
    }
    printf("str2  = ");
    for (int i = 0; i < size2[0]; i++)
    {
        for (int j = 0; j <size2[1]; j++)
        {
            for (int l = i; l >0; l--)
            {printf("\t");}            
            for (int k = 0; k < size2[2]; k++)
            {
                printf("%c ",str2[i][j][k]);
            }
            printf("\n");
        }
        
    }
    printf("\ncomparing str1 and str2 (1 if matching else 0)\n");
    for (int i = 0; i < size2[0]; i++)
    {
        for (int j = 0; j <size2[1]; j++)
        {
            for (int l = i; l >0; l--)
            {printf("\t");}
            
            for (int k = 0; k < size2[2]; k++)
            {
                if(str1[i][j][k]==str2[i][j][k])
                {printf("1 ");}else{
                    printf("0 ");
                }
            }
            printf("\n");
        }
        
    }



    /* Search the given element in the array and print it's position*/
    /* Find the sum of all elements in an array*/
    /* Find the maximum elements in an array*/

printf("Enter size of 3d array : ");
    scanf("%d %d %d",&size[0],&size[1],&size[2]);
    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            for (int k = 0; k < size[2]; k++)
            {
                printf("array[%d][%d][%d] = ",i,j,k);
                scanf("%d",&array[i][j][k]);
            }
            
        }
        
    }

    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            for (int l = i; l >0; l--)
            {printf("\t");}
            
            for (int k = 0; k < size[2]; k++)
            {
                printf("%d ",array[i][j][k]);
            }
            printf("\n");
        }
        
    }


    int sum=0,max=0,element;
    printf("Enter element to be searched");
    scanf("%d",&element);
    for (int i = 0; i < size[0]; i++)
    {
        for (int j = 0; j <size[1]; j++)
        {
            
            for (int k = 0; k < size[2]; k++)
            {
                sum+=array[i][j][k];
                if (max<array[i][j][k])
                {
                    max=array[i][j][k];
                }
                if (element==array[i][j][k])
                {
                    printf("Position : %d %d %d\n",i,j,k);
                }
            }
        }
        
    }
    printf("sum = %d\nmax = %d",sum,max);


    
}








