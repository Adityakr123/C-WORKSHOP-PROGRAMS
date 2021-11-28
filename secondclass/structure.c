//                                     Structure
// Structure in c is a user-defined data type that enables us to store the collection of different data types.

// syntax
// struct structure_name   //struct keyword is used to define any stucture
// {  
//     data_type member1;  //datatatype and variable that u need to store 
//     data_type member2;  
//     .  
//     .  
//     data_type memeberN;  
// };  
// example :-

#include<stdio.h>  
#include <string.h>    
struct employee      
{   int id;      
    char name[50];      
}e1;  //declaring e1 as object  for structure    
int main( )    
{    
   //store first employee information    
   e1.id=101;  // we can use that int id using this object  
   struct employee  e2;  //this is another technique to declare a object 
   e2.id=102;  
   strcpy(e1.name, "Anant");//copying string into char array    by using strcpy
   strcpy(e2.name, "Aditya");
   //printing first employee information    
   printf( "employee 1 id : %d\n", e1.id);  // using object again to call variable of structure  
   printf( "employee 1 name : %s\n", e1.name);   
   printf( "employee 1 id : %d\n", e2.id);  // using object again to call variable of structure  
   printf( "employee 1 name : %s\n", e2.name);  
   return 0;  
}    