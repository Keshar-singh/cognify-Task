   //Task 4 fabbonic  Series Description: Implement a program that generatesthe Fibonacci series up to a givennumber of //terms. Prompt the user toenter the number of terms and displaythe series.Skills: Loops, basic arithmeticoperations.


#include<stdio.h>

int main()
{
    // we intialize first and second terms
    int t1=0;
    int t2=1;
    int num;//number of terms 

    //we intilize next terms
    int nextterm=t1+t2;
    //user input number of terms
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    printf("fabbonic series : %d,%d,",t1,t2);
    for(int i=3;i<=num;i++)
    {
        printf("%d,",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
    return 0;
    
}