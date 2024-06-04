//Task: Calculator ProgramDescription: 
//Write a program that takes twonumbers and an operator as input(+, -, *, /, %) and performs thecorresponding arithmetic operation.Display the result on the console.




#include <stdio.h>
#include<conio.h>

void add(int a, int b)
{
    int add1 = a + b;
    printf("your result is \n");
    printf("%d", add1);
}

void subs(int a, int b)
{
    int subs = a - b;
    printf("your result is \n");
    printf("%d", subs);
}

void multi(int a, int b)
{
    int multi = a * b;
    printf("your result is \n");
    printf("%d", multi);
}

void divid(int a, int b)
{
    float divid;
    if(b!=0)
    {
        divid=a/b;
        printf("the result is %f",divid);
    }
    else 
    {
        printf("error : not divisible by zero");
    }
    
}

void main()
{

    int a;
    int b;
    
    char operator;
    char dummy;
    printf("enter your two number");

    scanf("%d %d", &a,&b);
    
    scanf("%c",&dummy);

    
    

    

    printf("choose the operatror\n");
    printf("1.addition '+'\n");
    printf("2.substraction '-'\n");
    printf("3.multiply '*'\n");
    printf("4.division '/'\n");



    scanf("%c", &operator);
    switch (operator)
    {
    case '+':
       add(a,b );
        break;

        case '-':
       subs(a,b );
        break;

        case '*':
       multi(a,b );
        break;

        case '/':
       divid(a,b );
        break;
    
    default:
    printf("envaild operator");
        break;
    }

    }
   
    
