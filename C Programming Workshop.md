# C/C++ Programming Workshop

![image-20210117120504581](C:\Users\HP\AppData\Roaming\Typora\typora-user-images\image-20210117120504581.png)

## C Keywords

Keywords are predefined, reserved words used in programming that have special meanings to the compiler.

![image-20210116232246573](C:\Users\HP\AppData\Roaming\Typora\typora-user-images\image-20210116232246573.png)

These keywords cannot be used as identifiers (in other words) names of variables, functions, etc. 

## Identifiers

### Rules for naming identifiers

1. A valid identifier can have letters (both uppercase and lowercase letters), digits and underscores.
2. The first letter of an identifier should be either a letter or an underscore.
3. You cannot use keywords like `int`, `while` etc. as identifiers.
4. There is no rule on how long an identifier can be. However, you may run into problems in some compilers if the identifier is longer than *31 characters.*

## Variables

In programming, a variable is a container to hold data. A variable can be of various data types.

![image-20210116234742345](C:\Users\HP\AppData\Roaming\Typora\typora-user-images\image-20210116234742345.png)

<!--You can always check the size of a variable using the `sizeof()` operator.-->

**Float vs Double?** The size of `float` (single precision float data type) is 4 bytes. And the size of `double` (double precision float data type) is 8 bytes.

##### short vs long?

If you need to use a number larger than the range of int*(-2,147,483,648 to 2,147,483,647)*, you can use a type specifier `long`. Here's how:

```
long a;   //stores large integers
long long b; //stores long long int (very large integers)
long double c;  // stores a large number with great precision i.e more decimal points
```

<!--If you are sure, only a small integer (`[−32,767, +32,767]` range) will be used, you can use `short`. -->

```
short d;
```

### signed vs unsigned?

```
unsigned int x;
int y;  //signed int
```

an unsigned integer has a range of 0  to 4,294,967,295

signed int is simply int w range -2^31-1 to 2^31 or simply,  to +2billion +**2billion**



In the case of chars, which are only 1 byte, the range of an unsigned char is 0 to 256, while the range of a signed char is -127 to 127.

But why? What’s it up with characters and increasing their ranges? If it bugs you, great. 

```c
#include<stdio.h>
int main()
{
 	int chr; 
 	unsigned char i;
 	for(chr=0;chr<=256;chr++)
    {
    	i=chr; 	
    	printf("char at position %d: %c\n",chr,i); 
    } 
    return 0; 
}
```



## scanf() vs printf()

- To take input from the user, we use scanf() function
- To display any output to the user, we use printf() function. 
- these functions are defined in stdio.h header file.



## Operators in C

![image-20210114010808323](C:\Users\HP\AppData\Roaming\Typora\typora-user-images\image-20210114010808323.png)

## Bitwise Operator

- In ALU of the CPU, mathematical operations like: addition, subtraction, multiplication and division are done in bit-level. To perform bit-level operations in C programming, bitwise operators are used.
- Are you familiar with Decimal to Binary conversion? 

| Operators | Meaning of operators                                         |
| :-------- | :----------------------------------------------------------- |
| &         | [Bitwise AND](https://www.programiz.com/c-programming/bitwise-operators#and) |
| \|        | [Bitwise OR](https://www.programiz.com/c-programming/bitwise-operators#or) |
| ^         | [Bitwise XOR](https://www.programiz.com/c-programming/bitwise-operators#xor) |
| ~         | [Bitwise complement](https://www.programiz.com/c-programming/bitwise-operators#complement) |
| <<        | [Shift left](https://www.programiz.com/c-programming/bitwise-operators#left-shift) |
| >>        | [Shift right]                                                |



## Bitwise AND operator &

I assume you guys are familiar with logic gates? Easy stuff right? 

The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0.

Let us C the bitwise AND operation of two integers 12 and 25.

### Example #1: Bitwise AND

```
#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a&b);
    return 0;
}
```

**Output**

```
Output = 8
```

## 

But, how?

I assume you all are familiar with binary expansion of a number? 

```
12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bit Operation of 12 and 25
  00001100
& 00011001
  ________
  00001000  = 8 (In decimal)
```

## Bitwise OR operator |

The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. In C Programming, bitwise OR operator is denoted by |.

```
12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise OR Operation of 12 and 25
  00001100
| 00011001
  ________
  00011101  = 29 (In decimal)
```

### Example #2: Bitwise OR

```
#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a|b);
    return 0;
}
```

**Output**

```
Output = 29
```

## Bitwise XOR (exclusive OR) operator ^

The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by ^.

```
12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise XOR Operation of 12 and 25
  00001100
^ 00011001
  ________
  00010101  = 21 (In decimal)
```

### Example #3: Bitwise XOR

```
#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a^b);
    return 0;
}
```

**Output**

```
Output = 21
```

## Bitwise complement operator ~

##### Bitwise complement of any number N is -(N+1). Here's how:

```
bitwise complement of N = ~N (represented in 2's complement form)
2'complement of ~N= -(~(~N)+1) = -(N+1)
```

### Example 

```
#include <stdio.h>
int main()
{
    printf("Output = %d\n",~35);
    printf("Output = %d\n",~-12);
    return 0;
}
```

**Output**

```
Output = -36
Output = 11
```

## Shift Operators in C programming

There are two shift operators in C programming:

- Right shift operator //divide by 2^x, where x is number of  shifts
- Left shift operator.  // multiply by 2^x , where x is number of shifts

### Right Shift Operator

Right shift operator shifts all bits towards right by certain number of specified bits. It is denoted by >>.

```
212 = 11010100 (In binary) // think about dragging this chain of bits to the right
212>>2 = 00110101 (In binary) [Right shift by two bits]  //to maintain the 8 bit 															structure, we add 0s to the front
212>>7 = 00000001 (In binary)
212>>8 = 00000000 
212>>0 = 11010100 (No Shift)
```

## Left Shift Operator

Left shift operator shifts all bits towards left by a certain number of specified bits. The bit positions that have been vacated by the left shift operator are filled with 0. The symbol of the left shift operator is <<.

```
212 = 11010100 (In binary)
212<<1 = 110101000 (In binary) [Left shift by one bit]
212<<0 = 11010100 (Shift by 0)
212<<4 = 110101000000 (In binary) =3392(In decimal)
```

### Example 

```
#include <stdio.h>
int main()
{
    int num=212, i;
    for (i=0; i<=2; ++i)
        printf("Right shift by %d: %d\n", i, num>>i);

     printf("\n");

     for (i=0; i<=2; ++i) 
        printf("Left shift by %d: %d\n", i, num<<i);    
    
     return 0;
}

Right Shift by 0: 212
Right Shift by 1: 106
Right Shift by 2: 53

Left Shift by 0: 212
Left Shift by 1: 424
Left Shift by 2: 848
```



## Functions in C/C++

A function is a set of statements that perform a specific task. It can take inputs which are also called **arguments/parameters** and return desired output after performing it’s specific computation.

The idea is to put some commonly or repeatedly done task together and make a function so that instead of writing the same code again and again for different inputs, we can call the function.

The general form of a function is: 

return_type function_name([ arg1_type arg1_name, ... ]) { code } 

```
#include<stdio.h>
int add(int a,int b, int c); //functional declaration
int main()
{
	int a,b,c,sum;
	printf("Enter three numbers to add: ");
	scanf("%d%d%d",&a,&b,&c);	//takinginput from the user using scanf
	sum=add(a,b,c);						//passing 3 numbers as arguments and receiving 												the return value in a variable sum.
	printf("sum is %d",sum);
}
int add(int a,int b, int c)
{
	return (a+b+c);						// function definition
}
```

A **function declaration** tells the compiler about a **function's** name, return type, and parameters. A **function definition** provides the actual body of the **function**.

# C Pointers

![We started programming in C in Operating Systems... - Meme on Imgur](https://i.imgur.com/u44xRM9.png)

Before we learn pointers, let's learn about addresses in C programming.

------

## Address in C

If you have a variable var in your program, `&var` will give you its address in the memory.

Remember the `scanf()` function? We were using addresses all along.

```
scanf("%d", &var);
```

Here, the value entered by the user is stored in the address of var variable. Let's take a working example.

```
#include <stdio.h>
int main()
{
  int var = 5;
  printf("var: %d\n", var);
  
  printf("address of var: %p", &var);  // Notice the use of & before var and also the 											format specifier %p
  return 0;
}
```

**Output**

```
var: 5 
address of var: 2686778
```

**Note:** You will probably get a different address when you run the above code.

------

## C Pointers

Pointers (pointer variables) are special variables that are used to store addresses rather than values.

### Pointer Syntax

Here is how we can declare pointers.

```
int* p;
```

Here, we have declared a pointer p of `int` type.

You can also declare pointers in these ways.

```
int *p1;
int * p2;
```

------

Let's take another example of declaring pointers.

```
int* p1, p2;
```

Here, we have declared a pointer p1 and a normal variable p2.

------

### Assigning addresses to Pointers

Let's take an example.

```
int* pc, c;
c = 5;
pc = &c;

```

Here, 5 is assigned to the c variable. And, the address of c is assigned to the pc pointer.

------

### Get Value of Thing Pointed by Pointers

To get the value of the thing pointed by the pointers, we use the `*` operator. For example:

```
int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);   // Output: 5
```

Here, the address of `c` is assigned to the pc pointer. 

**To get the value stored in that address, we used *pc.**

**Note:** In the above example, pc is a pointer, not `*pc`.

You cannot and should not do something like `*pc = &c`;

By the way, **`*` is called the dereference operator (when working with pointers)**. It operates on a pointer and gives the value stored in that pointer.

------

### Changing Value Pointed by Pointers

Let's take an example.

```
int* pc, c;
c = 5;
pc = &c;
c = 1;
printf("%d", c);    // Output: 1
printf("%d", *pc);  // Ouptut: 1
```

We have assigned the address of c to the pc pointer.

Then, we changed the value of c to 1. Since pc and the address of c is the same, `*pc` gives us 1.

Let's take another example.

```
int* pc, c;
c = 5;
pc = &c;
*pc = 1;
//c = 1
printf("%d", *pc);  // Ouptut: 1
printf("%d", c);    // Output: 1
```

We have assigned the address of c to the pc pointer.

Then, we changed `*pc` to 1 using `*pc = 1;`. Since pc and the address of c is the same, c will be equal to 1.

Let's take one more example.

```
int* pc, c, d;
c = 5;
d = -15;

pc = &c; printf("%d", *pc); // Output: 5
pc = &d; printf("%d", *pc); // Ouptut: -15
```



The address of c is assigned to the pc pointer using `pc = &c;`. Since c is 5, `*pc` gives us 5.

Then, the address of d is assigned to the pc pointer using `pc = &d;`. Since d is -15, `*pc` gives us -15.

------

### Example: Working of Pointers

Let's take a working example.

```
#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
   return 0;
}
```

**Output**

```
Address of c: 2686784
Value of c: 22

Address of pointer pc: 2686784
Content of pointer pc: 22

Address of pointer pc: 2686784
Content of pointer pc: 11

Address of c: 2686784
Value of c: 2
```

------

### Common mistakes when working with pointers

Suppose, you want pointer pc to point to the address of c. Then,

```
int c, *pc;

// pc is address but c is not
pc = c; // Error

// &c is address but *pc is not
*pc = &c; // Error

// both c and *pc values 
*pc = c;	//not the right way to point to c
```

Here's an example of pointer syntax beginners often find confusing.

```
#include <stdio.h>
int main() {
   int c = 5;
   int *p= &c;

   printf("%d", *p);  // 5
   return 0; 
}
```

**Why didn't we get an error when using `int *p = &c;`?**

It's because

```
int *p = &c;
```

is equivalent to

```
int *p:
p = &c;
```

In both cases, we are creating a pointer `p` (not `*p`) and assigning `&c` to it.

To avoid this confusion, we can use the statement like this:

```
int* p = &c;
```

# C Dynamic Memory Allocation

Static vs Dynamic memory?

The major difference between static and dynamic memory allocations are:

| Static Memory Allocation                                     | Dynamic Memory Allocation                                    |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
|                                                              |                                                              |
| Allocation is done before program execution                  | Allocation is done during program execution                  |
| It uses the data structure called stack for implementing static allocation | It uses the data structure called heap for implementing dynamic allocation |
| Less efficient                                               | More efficient                                               |
| There is no memory reusability                               | There is memory reusability and memory can be freed when not required |



As you know, an array is a collection of a fixed number of values. Once the size of an array is declared, you cannot change it.

Sometimes the size of the array you declared may be insufficient. To solve this issue, you can allocate memory manually during run-time. This is known as dynamic memory allocation in C programming.

To allocate memory dynamically, library functions are `malloc()`, `calloc()`, `realloc()` and `free()` are used. These functions are defined in the `<stdlib.h>` header file.

------

## C malloc()

The name "malloc" stands for memory allocation.

The `malloc()` function reserves a block of memory of the specified number of bytes. 

------

### Syntax of malloc()

//type casting is done - i/e conversion of one datatype to another. 

//Why is it req? Cuz an int type pointer will point only to an array of integers.  This is same for all datatypes.

```
int *ptr;
ptr = (castType*)malloc(size*sizeof(castType));
```

**Example**

```
float array[100] //this is static allocation of memory
int *ptr
ptr = (float*)malloc(100 * sizeof(float));  //this is dynamic allaocation of memory
```

The above statement allocates 400 bytes of memory. It's because the size of `float` is 4 bytes. And, the pointer ptr holds the address of the first byte in the allocated memory.

------

## C calloc()

The name "calloc" stands for contiguous allocation.

The `malloc()` function allocates memory and leaves the memory uninitialized i.e, there is some garbage value in it. Whereas, the `calloc()` function allocates memory and initializes all bits to zero.

------

### Syntax of calloc()

```
ptr = (castType*)calloc(n, size);
```

**Example:**

```
ptr = (float*) calloc(25, sizeof(float));
```

The above statement allocates contiguous space in memory for 25 elements of type `float`.

------

## C free()

Dynamically allocated memory created with either `calloc()` or `malloc()` doesn't get freed on their own. You must explicitly use `free()` to release the space.

------

### Syntax of free()

```
free(ptr);
```

This statement frees the space allocated in the memory pointed by `ptr`.

------

### Example 1: malloc() and free()

```
// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int)); //creating an integer array of n index 													dynamically
 
    // if memory cannot be allocated
    if(ptr == NULL)                     //performing error handling
    {
        printf("Error! memory not allocated.");	//good programming practice
        exit(0);
    }

    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i); //ptr+i is nothing but &ptr[i]
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);
  
    // deallocating the memory
    free(ptr);

    return 0;
}
```

Here, we have dynamically allocated the memory for n number of `int`.

------

### Example 2: calloc() and free()

```
// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}
```

------

## C realloc()

If the dynamically allocated memory is insufficient or more than required, you can change the size of previously allocated memory using the `realloc()` function.

------

### Syntax of realloc()

```
ptr = realloc(ptr, x);
```

Here, ptr is reallocated with a new size x.

------

### Example 3: realloc()

```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i , n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory: ");
    for(i = 0; i < n1; ++i)
         printf("%u\n",ptr + i);

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // rellocating the memory
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory: ");
    for(i = 0; i < n2; ++i)
         printf("%u\n", ptr + i);
  
    free(ptr);

    return 0;
}
```

When you run the program, the output will be:

```
Enter size: 2
Addresses of previously allocated memory:26855472
26855476

Enter the new size: 4
Addresses of newly allocated memory:26855472
26855476
26855480
26855484
```





#### Exception Handling: It’s one advantage of C++ over C. 

Exceptions are run-time anomalies or abnormal conditions that a program encounters during its execution. 

C++ provides following specialized keywords for this purpose.

- *try*: represents a block of code that can throw an exception.
- *catch*: represents a block of code that is executed when a particular exception is thrown.
- *throw*: Used to throw an exception. Also used to list the exceptions that a function throws, but doesn’t handle itself.

Following is a simple example to show exception handling in C++. The output of program explains flow of execution of try/catch blocks. 



![image-20210115003511450](C:\Users\HP\AppData\Roaming\Typora\typora-user-images\image-20210115003511450.png)

**Output:** 

```
Before try
Inside try
Exception Caught
After catch (Will be executed)
```

# Looping

There are 3 types of loops in C++.

- `for` loop

The syntax of for-loop is:

```
for (initialization; condition; update) {
    // body of-loop 
}
```

Here,

`initialization` - initializes variable(s)  used for looping, and is executed only once.

`condition` - if `true`, the body of `for` loop is executed
if `false`, the for loop is terminated

`update` - updates the value of initialized variables and again checks the condition

![image-20210115014842509](C:\Users\HP\AppData\Roaming\Typora\typora-user-images\image-20210115014842509.png)

Eg: To print first 5 positive integers.

```c++
#include<iostream>
using namespace std;
int main()
{
    int i;				//declaring a variable i
    for(i=1;i<=5;i++)	//initializing i with 1, condition (i<=5) , after each iteration 							i will increment by 1  
        cout<<i;		//OUTPUT: 12345
}
```



- `while` loop

The syntax of the `while` loop is:

```c++
// The variable on which the condition depends is initialised usually before the loop

while (condition) {
    // body of the loop
    // the variable on which the condition depends is usually updated at the end of the 		body
}
```

Eg: To print first 5 positive integers 

```c++
#include<iostream>
using namespace std;
int main()
{
    int i=1;				//declaring a variable i and initialising it with 1
    while(i<=5) 		//initializing i with 1, condition (i<=5) , after each iteration 							i will increment by 1  
    {
        cout<<i;		//OUTPUT: 12345
        i++;
    }
        
}
```



- `do...while` loop

The `do...while` loop is a variant of the `while` loop with one important difference: the body of `do...while` loop is executed once before the `condition` is checked.

Its syntax is:

```
// The variable on which the condition depends on, is initialised usually before the loop
do {
   // body of loop;
   // the variable on which the condition depends on, is usually updated at the end of 		 the body
}
while (condition);	//One imp thing to note is the semicolon. 
```

Eg: To print first 5 positive integers 

```c++
#include<iostream>
using namespace std;
int main()
{
    int i=1;				//declaring a variable i and initialising it with 1
    do
    {
        cout<<i;		// The loop will run at least once.
        i++;
    }
    while(i<=5); 		//initializing i with 1, condition (i<=5) , after each iteration 							i will increment by 1  
}
//OUTPUT: 12345
```



## Recursion 

![Functional Programming for Android Developers — Part 3](https://cdn-media-1.freecodecamp.org/images/1*exgznl7z65gttRxLsMAV2A.png)

In programming languages, if a program allows you to call a function inside the same function, then it is called a recursive call of the function.

```
void recursion() {
   // an exit condition
   recursion(); /* function calls itself */
}

int main() {
   recursion();
}
```

The C programming language supports recursion, i.e., a function to call itself. While using recursion, YOU as programmers need to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.

Recursive functions are very useful to solve many mathematical problems, such as calculating the factorial of a number.

```
#include <stdio.h>

int factorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);			
}

int  main() {
   int i = 5;
   printf("Factorial of %d is %d\n", i, factorial(i));
   return 0;
}
```

When the above code is compiled and executed, it produces the following result −

```
Factorial of 5 is 120
```

### Searching 

#### Linear Search

Linear search in C to find whether a number is present in an array. If it's present, then at what location it occurs. It is also known as a sequential search. It is straightforward and works as follows: we compare each element with the element to search until we find it or the list ends.

![Linear search](https://www.programmingsimplified.com/images/c/linear-search.gif)

## Linear search program in C

```c
#include <stdio.h>
int main()
{
	int array[100], search, i, n; //search-> element to be searched , n -> size of array
	 printf("Enter number of elements in array\n");
	 scanf("%d", &n);
	 printf("Enter %d integer(s)\n", n);			
	 for (i=0;i<n;i++)				 //taking n numbers from the user
	 scanf("%d", &array[i]);      //No curly brackets because only one line of code is 										there inside the loop.
	 printf("Enter a number to search\n"); 
	 scanf("%d", &search);	// the user will enter which element he/she wants to search. 
	 for (i=0;i<n;i++)
	 {
	 	if (array[i] == search)   // Checks every element in the array untill a match 										occurs / list ends.  
  		{
		   printf("%d is present at location %d.\n", search, i+1);   //Position is i+1 ? 													 Because we are initializing i with 0. 
		   break; 		 //breaks out of the for loop as soon as search element is found
		}
 	}
 if (i==n)             //i will get equal to n only if the element we are searching for 						is not found in the list.
  printf("%d isn't present in the array.\n", search);
return 0;  			   //telling the OS that the program executed successfully. 
}


```

# Binary search in C

Binary search in C language to find an *element in a sorted array*. If the array isn't sorted, you must sort it using a sorting technique such as merge sort. If the element to search is present in the list, then we print its location. The program assumes that the input numbers are in ***ascending*** order.

```c
#include <stdio.h>
int main()
{
  int i, first, last, middle, n, search, array[100];  //n-> size of array , (first,last,middle) -> to search the element, search -> element to be searched.

  printf("Enter number of elements\n");      //size of the array
  scanf("%d", &n);

  printf("Enter %d integers\n", n);         

  for (i=0; i<n; i++)   
    scanf("%d", &array[i]);           //taking n elements from the user (Note: It must be a sorted list in binary search)

  printf("Enter value to find\n");
  scanf("%d", &search);               //Element to search

  first = 0;                          // setting first to the start
  last = n - 1;                       // setting last to n-1 which is the last element of the array as indexing is from 0 to n-1
  middle = (first+last)/2;            // setting the middle element.  

  while (first <= last)               // untill first and the last elements overlap/coincide/fall together.
  {
    if (array[middle] < search)       // we will check middle with the element to search.
      first = middle + 1;             // because element to be searched in greater than the middle element
    else if (array[middle] == search) // if element to be searched is found at the middle 
    {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else                              // if element to be searched is not greater than OR = to mid, then it must be less than mid.
      last = middle - 1;              
    middle = (first + last)/2;        // updating the middle point.
  }
  if (first > last)                   // if element not found.
    printf("Not found! %d isn't present in the list.\n", search);
  return 0;
}
```



## Bubble sort

Compares adjacent elements and swaps them if needed. In every iteration, the largest element gets bubbled out. First let’s clear the concept and then we’ll see how we achieve this with code. 

https://www.youtube.com/watch?v=nmhjrI-aW5o&feature=youtu.be

```c
#include <stdio.h>
int main()
{
  int array[100], n, c, d, temp;    //n-> size of array , c,d -> used for looping , temp -> used to perform swap

  printf("Enter number of elements\n");		
  scanf("%d", &n);							// entering size of the array	

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);					// entering the elements

 
    
   for (c = 0 ; c < n - 1; c++)				// we begin sorting, running the first loop from 0 to n-1, can you guess why? take an eg of 3 elements, max 2 swaps are req to 																sort it in any scenario.
  {
    for (d = 0 ; d < n - c - 1; d++)		// if you observe closely, it's the same as above except an extra "-c" in condition which performs the "bubbling largest element out thing"
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        temp       = array[d];	 // swapping if the trailing array element is greater than the leading array element.
        array[d]   = array[d+1];
        array[d+1] = temp;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)				// print the sorted elements.
     printf("%d\n", array[c]);
  return 0;
}
```



## Selection sort

Find the minimum value in each iteration and keep swapping it from beginning to end. 

https://youtu.be/xWBP4lzkoyM

```c
#include<stdio.h>
#include<stdlib.h>
void swap(int*,int*); //Declaring function to swap two integers
int main()
{
int *ptr,n;		 // an int pointer to dynamically make an array, variable n for size of array
printf("How many elements do you wish to enter?\n");
scanf("%d",&n);				//taking array size from the user
int mindex,i,j;		//mindex to find lowest element of array. i and j are looping 																				variables
ptr=(int*)malloc(n*sizeof(int));	//Dynamically allocating an array of size 'n' 
printf("Enter the elements:-\n");
for(i=0;i<n;i++)
scanf("%d",&ptr[i]);			//taking n elements as input to fill the array
printf("You entered:\n");
for(i=0;i<n;i++)			
printf("%d	",ptr[i]);			//printing the unsorted array

    
    
 printf("\nNow sorting...\n");
for(i=0;i<n-1;i++)	     //why 'n-1'? take an eg of 3 elements, max 2 swaps are req to 																sort it in any scenario.
	{
	mindex=i;				// storing first index in mindex
	for(j=i+1;j<n;j++)		// iterating from i+1 position element to the last element
		{
		if(ptr[j]<ptr[mindex])	// if any jth index value of the array is smaller than mindex value
		mindex=j;				// change the mindex to jth position
		}				//once the above loop has executed, we have mindex at the smallest element of the array. 
		swap(&ptr[i],&ptr[mindex]);	//then we swap this smallest element with i'th 											 position using call by reference function call
	}
printf("The sorted list is:\n");	
for(i=0;i<n;i++)
printf("%d	",ptr[i]);				// printing the sorted array 
printf("\n");
}

void swap(int *x,int *y)			// defining function to swap two numbers
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}


```



# C struct

In C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name. **Structures are user defined datatypes.**

## How to define structures?

Before you can create structure variables, you need to define its data type. To define a struct, the `struct` keyword is used.

### Syntax of struct

```
struct structureName 
{
    dataType member1;
    dataType member2;
    ...
};
```

Here is an example:

```
struct Person
{
    char name[50];
    int citNo;
    float salary;
};
```

Here, a derived type `struct Person` is defined. Now, you can create variables of this type.

## Create struct variables

When we make a structure in our program, no memory is allocated to it yet. It is like making the blueprint of our user defined datatype. To allocate memory of a given structure type and work with it, we need to create variables.

Here's how we create structure variables:

```
struct Person
{
    char name[50];
    int citNo;
    float salary;
};

int main()
{
    struct Person person1, person2, p[20];
    return 0;
}
```

Another way of creating a struct variable is:

```
struct Person
{
    char name[50];
    int citNo;
    float salary;
} person1, person2, p[20];
```

In both cases, two variables person1, person2, and an array variable p having 20 elements of type `struct Person` are created.



```
#include<stdio.h>
struct student					//defining a structure student in C
{
  char name[50];
  int roll;
};

int main()
{
  struct student stu1,*ptr,stu2;  //making structure variables, including a structure 											pointer
  ptr=&stu2;						//pointing stu2 with structure pointer
  printf("Enter stu1's name: ");
  fgets(stu1.name, 50, stdin);		//to input a space separated string
  printf("%s",stu1.name);			//structure_variable.structure_data_member

  printf("Enter stu2's roll: ");
  scanf("%d",&ptr->roll);			////structure_pointer->structure_data_member
  printf("Stu2 %d",ptr->roll);
  return 0;
}
```


Output:

![image-20210117105923062](C:\Users\HP\AppData\Roaming\Typora\typora-user-images\image-20210117105923062.png)



# C Unions

A union is a user-defined type similar to **structs in C** except for one key difference. Structs allocate enough space to store all its members wheres unions allocate the space to store only the largest member.

## How to define a union?

We use the `union` keyword to define unions. Here's an example:

```
union car
{
  char name[50];
  int price;
};
```

The above code defines a derived type `union car`.

#### Create variables in Union

Here's how we create union variables.

```
union car
{
  char name[50];
  int price;
};

int main()
{
  union car car1, car2, *car3;
  return 0;
}
```

Another way of creating union variables is:

```
union car
{
  char name[50];
  int price;
} car1, car2, *car3;
```

In both cases, union variables car1, car2, and a union pointer car3 of `union car` type are created.

### Access members of a union

We use the `.` operator to access members of a union. To access pointer variables, we use also use the `->` operator.

In the above example,

- To access price for `car1`, `car1.price` is used.
- To access price using `car3`, either `(*car3).price` or `car3->price` can be used.



## Difference between unions and structures

Let's take an example to demonstrate the difference between unions and structures:

```
#include <stdio.h>
union unionJob
{
   //defining a union
   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\nsize of structure = %d bytes", sizeof(sJob));
   return 0;
}
```

**Output**

```
size of union = 32			//32 only, as it is the largest in size of others
size of structure = 40		//32+4+4
```

### Be careful with using union!

### Example: Accessing Union Members

```
#include <stdio.h>
union Job {
   float salary;
   int workerNo;
} j;

int main() {
   j.salary = 12.3;

   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
   
   j.workerNo = 100;

   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}
```

**Output**

```
Salary = 0.0
Number of workers = 100
```