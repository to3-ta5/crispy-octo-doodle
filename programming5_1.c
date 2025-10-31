#include <stdio.h>

int main()
{
   int k;
   printf("How many notes?");
   scanf("%d",&k);
   
   if(k>50)
   {
       printf("There are many books!");
     }

   else if(50>=k && k>20)
   {
       printf("There are some books!");
     }

   else
   {
       printf("There are few books!");
      }
 
    return 0;
}
