





#include<stdio.h>

// create function for dassending array
 void sortarray(int arr[],int size)
 {
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
 }

// create function for AAssending  array
 void sortarray2(int arr[],int size)
 {
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
 }

// create function for printing array
 void printarray(int arr[],int size)
 {
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d,",arr[i]);
    }
    
 }

int main()
{
    int arr[100];
    int size;
    int i;
    int order;
    int exit;


    printf("enter your array size\n");
    scanf("%d",&size);
    printf("enter your array element\n");

    for ( i = 0; i <size; i++)
    {
        /* code */

        scanf("%d",&arr[i]);
    }

    printarray(arr,size);
    printf("\n");

    printf("choose order\n");
    printf("1. Assend.order\n");
    printf("2. Descend.order\n");
    printf("3. Exit\n");
    scanf("%d",&order);
     


    /* code */


    if(order==1)
    {
        sortarray2(arr,size);
    }
    else if(order==2){
        sortarray(arr,size);
    }
    else{
    printf("default order is here \n");
    sortarray2(arr,size);
    }

     printarray(arr,size);

    
return 0;

    
}