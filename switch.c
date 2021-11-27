/*                            SWITCH
Switch case statements are a substitute 
for long if statements that compare a variable to several integral values 
here n has certain value and n is passed trough switch
switch (n)
{
    case 1: // code to be executed if n = 1;
        break;
    case 2: // code to be executed if n = 2;
        break;
    default: // code to be executed if n doesn't match any cases
}
Write a code to print any number from one to ten entered by user in alphabetical form */
#include <stdio.h>
int main()
{
   int number;
   printf("Enter any number from one to 10\n");
   scanf("%d",&number);
   switch (number)
   {
       case 1: printf("ONE");
               break;
       case 2: printf("TWO");
                break;
       case 3: printf("THREE");
               break;
       case 4: printf("FOUR");
               break;
       case 5: printf("FIVE");
                break;
       case 6: printf("SIX");
               break;
       case 7: printf("SEVEN");
               break;
       case 8: printf("EIGHT");
                break;
       case 9: printf("NINE");
               break;
       case 10: printf("TEN");
               break;
       default: printf("u entered a number less than or more than 10 or something else\n");
                break; 
   }
   return 0;
}