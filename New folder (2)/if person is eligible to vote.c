//program to determine if someone is eligible to vote based on age(18yrs)
#include<stdio.h>
int main()
{
  int age;
  printf("Enter your age:");
  scanf("%d",&age);
  if("age!>=18")
  {
      printf("you are eligible to vote");
  }
   else
   {
       printf("you are not eligible to vote");

   }
      return 0;
}


