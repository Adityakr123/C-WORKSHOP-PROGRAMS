                                //  recursion syntax
// void recurse()
// {
//     ... .. ...
//     recurse();
//     ... .. ...
// }

// int main()
// {
//     ... .. ...
//     recurse();
//     ... .. ...
// }
// write a program to print number frm 0 to n where n is taken by user
#include <stdio.h>
int print(int n);

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    print(n);
    return 0;
}

int print(int n) {
   
   printf("%d\n",n);
   n=n-1;
   if(n<0){
       return 0;
   }
   print(n);
}