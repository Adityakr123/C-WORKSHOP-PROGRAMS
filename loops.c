// SYNTAX:
// if(test_expression)
// {
//     statement 1;
//     statement 2;
//     ...
// }
// LOOPS IN C

#include<stdio.h>
#include <string.h>
//header file as it gives all input output functions
int main(){//main function that runs first in any c program
// // diffrence of int main and void main 
//     //for loop
//     for(int i=0;i<10;i++){//here int i means declaration of any variable as an int datatype where variable is i and datatype in int 
//     // we dont put semicolon here as it is a conditon not statement 
//     //and i<10 means that i's value should be less than 10 only not more than 9 and i++ incrases the value of i each time 
//         printf("%d\n",i);//printf it is a function to print the integer we are printing each value of i till 9 from 0
//     }
//     printf("--------------------------whileloop---------------------------\n");
//     //while loop
//     int j=0;
//     while(j<10){// we dont put semicolon here as it is a conditon not statement 
//         printf("%d\n",j);
//         j++;
//     }
//     //diffrence between for and while loop 
//     //   for loop                               while loop
//     // Used to obtain the                      // Used to obtain the                      
//     //result only when the                     //result only when the 
//     //number of iterations is known.           //number of iterations is known.
   
//     //                          Example 
//     char name[5];
//     scanf("%s",name);
//     // printf("%d",strcmp(name,"aditya"));
//     while(strcmp(name,"aditya") != 0){//strcmp is a string function which returns 0 when true else can return any thing  all these functions come under string.h file //u cant compair the two strings using == functions as it compair's the base address of the strings

//         scanf("%s",name);
//     }
//     // few of string functions are 	strcpy(destination, source) which copies the content of source string to destination string 
//     //strlen(string_name) tells the length of string 
//     //strcat(first_string, second_string) it joins first string with second string. The result of the string is stored in first string.
//     //	strrev(string) return the reversed string like entring aditya will give aytida
//     //	strlwr(string) it converts whole string to lowercase 
//     // strupr(string) convets whole string to uppercase 
//     // so we cant do it by for loop or doing it by for loop will make it more complex 
//     //now do while loop the do while loop is a exit  control loop as condition is checked at the exit of iteration so it will run one  .
//     //while in other loops conditions are checked at the entry point
//     printf("--------------------------do whileloop---------------------------\n");  
//     int k=0;
//     do{
//         printf("UPES CSA\n");
//         printf("%d",k);
//         k++;
//     }
//     while (k<10);
//     return 0;
    
    // USE OF BREAK AND CONTINUE STATEMENT 
    // break statement is used to break or stop the loop 
    // continue staement is used to skip any one iteration of the loop 
    printf("--------------------------break ---------------------------\n");  
    // Example of break 
    
    for(int h=0;h<10;h++){
        if(h==6){
            break;
        }
        printf("%d\n",h);
    }
    printf("--------------------------continue ---------------------------\n");  
        // Example of continue statement
    
    for(int y=0;y<10;y++){
        if(y==6){
            continue;
        }
        printf("%d\n",y);
    }

    
}

