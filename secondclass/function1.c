// function with return type and input type
// write a program to add two number using functions
#include<stdio.h>
float add (float a,float b);// float before add means what would be return type of this function 
//and float a and float b means type of input what would they be 
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    float x=add(a,b);
    printf("%f",x);
    return 0;

}
float add (float a,float b){
    int c=a+b;
    return c;
}

