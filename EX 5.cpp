#include<stdio.h>
#include<conio.h>
int main()
{
    int number,f,factorial,fact;
    printf("\n  Enter the number: ");
    scanf("%d",&number);
  {     
    f=factorial(number);
    printf("\n  The factorial of the number %d is %d",num,f);
    getch();
} 
int factorial(int number)
{
    if(number==0 || number==1)
        return 1;
    else
        return(number * fact(number-1));
}
}

