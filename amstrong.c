//                                  Armstrong number 
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// for example   0, 1, 153, 370, 371 and 407
// making a program to genetrate armstrong number from 1 to n 
#include<stdio.h>
#include<math.h>//math.h is a header file that contains important math functions like pow .
int main()
{
    int n;// declaring the length variable as an int data type whose name is n
    printf("Enter the value of n\n");
    scanf("%d",&n);// taking input
    for(int i=0;i<n;i++)
    {
        
        int temp=i;// assigning the value of i to one of the temporary variable 
        int temp1=i;// again assigning the value of i to another temporary variable 
        int sum=0;// declaring one variable sum=0
        int count=0;// starting a counter as 0
        while(temp>0){
            int a=temp%10;
            count++;
            temp=temp/10;
        }
        while(temp1>0){
            int a=temp1%10;
            sum=sum+pow(a,count);  
            temp1=temp1/10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
}