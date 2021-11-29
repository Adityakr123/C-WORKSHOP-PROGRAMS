//                         FUNCTIONS IN C
// three aspects of a C function.

// Function declaration A 

// Function call Function 

// Function definition 

// Syntax 
// return_type function_name(data_type parameter...){  
// //code to be executed  
// }  

#include<stdio.h>  
void printName();  //function declaration //function prototyping means telling the compiler that this is a function . here void means return type of the function and this :- () means the input type  

int main ()  
{  
    printf("Hello\n");  
    printName();  //function calling 
    return 0;
}  
void printName()  // function definition 
{  
    printf("Aditya Kumar");  
}  
