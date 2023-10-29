/*
Program to add, subtract, multiply and divide numbers
Designed for 4 digit addition
Verion 3
29/10/23
Rohan Kakade
*/
#include "mbed.h"

//Declaring Analog input pin object and PwmOut pin object
int adding(int a, int b, int c, int d);
int subtraction(int a,int b, int c, int d);
double multiplication(long long a, long long b, long long c, long long d);
float division(float a, float b, float c, float d);


int main()
{
//define a char variable to store a default operator
char choice = '+';

//infinite loop start
while(true)
    {
        //declare variables to store numbers to manipulated
        int num1, num2, num3, num4 = 0;
        
        printf("Welcome to the calculator program (designed for manipulating 4 digit numbers) \n");

        //Request user for choice of operation and store it
        printf("\n What operation would you like to perform? Type +,-,* or / and then press Enter: ");
        scanf(" %c", &choice);
        printf("%c \n", choice);

        //Request user for numbers and store them
        printf("Enter 1st number:");
        scanf(" %d",&num1);
        printf("%d \n", num1);

        printf("\n Enter 2nd number: ");
        scanf(" %d",&num2);
        printf("%d \n", num2);

        printf("\n Enter 3rd number: ");
        scanf(" %d",&num3);
        printf("%d \n", num3);

        printf("\n Enter 4th number: ");
        scanf(" %d",&num4);
        printf("%d \n", num4);
        
        //peform user requested operation 
        if(choice == '+') //addition
        {
            printf("%d + %d + %d + %d = %d \n", num1, num2, num3, num4, adding(num1, num2, num3, num4));
        }

        else if(choice == '-') //subtraction
        {
            printf("%d - %d - %d - %d = %d \n",num1, num2, num3, num4, subtraction(num1, num2, num3, num4));
        }

        else if(choice == '*') //multiplication
        {
            printf("%d * %d * %d * %d = %.10e \n",num1, num2, num3, num4, multiplication(num1, num2, num3, num4));
        }
        else if (choice == '/') //division
        {
            printf("(((%d / %d) / %d)/ %d) =  %.10e \n",num1, num2, num3, num4, division(num1, num2, num3, num4));
        }
        
        else //for the case when user enters an invalid operator
        {
            printf("Invalid number entered \n");
        }
    
    } //end of infinite loop

}

//function definition for addition
int adding(int a, int b, int c, int d)
{
    return a+b+c+d;
}

//function definition for subtraction
int subtraction(int a, int b, int c, int d)
{
   return a-b-c-d; //last three numbers subtracting the first
}

//function definition for multiplication
double multiplication(long long a, long long b, long long c, long long d)
{
    return a*b*c*d;
}

//function definition for division
float division(float a, float b, float c, float d)
{
    return ((a/b)/c)/d; //successive division performed
}
