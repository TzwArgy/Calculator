#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
float GetNum(float num)
{
    printf("Input number: ");
    scanf("%f",&num);
    printf("\n%.1f\n\n", num);
    return num;
}
float addition(float num)
{
    float numForAddition;
   printf("Input number for addition: ");
   scanf("%f",&numForAddition);
   num = num + numForAddition;
   printf("\n%.2f\n\n", num);
    return num;
}
float Subtraction(float num)
{
    float numForSubtraction;
   printf("Input number to subtract: ");
   scanf("%f",&numForSubtraction);
   num = num - numForSubtraction;
   printf("\n%.2f\n\n", num);
    return num;
}
float Multiplication(float num)
{
    float numForMultiplication;
   printf("Input number to multiply by: ");
   scanf("%f",&numForMultiplication);
   num = num * numForMultiplication;
   printf("\n%.2f\n\n", num);
    return num;
}
float Division(float num)
{
    float numForDivision;
   printf("Input number to divide by: ");
   scanf("%f",&numForDivision);
   if(numForDivision == 0)
   {
       printf("Syntax Error(Can't divide by 0 silly)\n");   //Checks in case of division by 0
       return Division(num);
   }
   num = num / numForDivision;
   printf("\n%.2f\n\n", num);
    return num;
}
float Power(float num)
{
    float KeepValue=num; //keeps original value of number
    int RaiseToPowerOfNum;
   printf("Input number for power to raise to: ");
   scanf("%d",&RaiseToPowerOfNum);
    for(int i=1; i<RaiseToPowerOfNum; i++)
    {
        KeepValue = KeepValue * num;
    }
    num=KeepValue;
   printf("\n%.2f\n\n", num);
    return num;
}
float SquareRoot(float num)
{
    num = sqrt(num);
    printf("\n%.2f\n\n", num);
    return num;
}
void menu(float num)
{
    int MenuChoice;
    while(true)
    {
    printf("0.NewNumber\n1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Raise to the Power\n6.Square Root\n404. Leave\n");
    printf("Choose option: ");
    scanf("%d",&MenuChoice);
    switch(MenuChoice)
    {
    case 0:
        num=GetNum(num);
        break;
    case 1:
       num = addition(num);
        break;
    case 2:
        num = Subtraction(num);
        break;
    case 3:
        num = Multiplication(num);
        break;
    case 4:
        num = Division(num);
        break;
    case 5:
        num = Power(num);
        break;
    case 6:
        num = SquareRoot(num);
        break;
    case 404:
        return;
    }
    }
}
int main()
{
    float number=0;
    menu(number);
    return 0;
}
