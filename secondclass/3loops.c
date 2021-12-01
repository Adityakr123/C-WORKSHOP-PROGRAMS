
#include <stdio.h>

int main()
{
   int n;
   printf("Enter a number whose factorial u want\n");
   scanf("%d",&n);
   int m=n;
   int s=n;
   int product=1;
   for(int i=n;i>0;i--){
       product=product*i;
       printf("%d \n",i);
       
   }
   printf("------------------------------final ans -------------------\n");
   printf("%d",product);
   printf("------------------------------while loop -------------------\n");
   product=1;
   while(m>0){
      product=product*m; 
      printf("%d \n",m);
      m--;
   }
   printf("------------------------------final ans -------------------\n");
   printf("%d",product);
   printf("------------------------------ dowhile loop -------------------\n");
   product=1;
   do{
      product=product*s; 
      printf("%d \n",s);
      s--;
   }
   while(s>0);
   printf("------------------------------final ans -------------------\n");
   printf("%d",product);
   return 0;
}