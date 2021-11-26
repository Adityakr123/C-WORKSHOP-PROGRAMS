// Fibonacci Series
//  0, 1, 1, 2, 3, 5, 8, 13, 21 fibonacci series is a series where next number is sum of first two numbers 
// we need to take first two numbers then print the series 
#include<stdio.h>//the basic line for standard input output
int main(){//the main function
    int n1,n2;
    int len;
    printf("Enter the starting points\n");
    scanf("%d %d",&n1,&n2);//taking the input for first 2 values
    printf("Enter the length of fibonacii series\n");
    scanf("%d",&len);
    printf("%d %d ",n1,n2);
    for(int i=2;i<len;i++){
        printf("%d ",n1+n2);
        int tem=n2;//decalring a temporary variable 
        n2=n2+n1;// in books it is written also n2+=n1;
        n1=tem; // storing the temporary variable to n1 
        
    }
}
