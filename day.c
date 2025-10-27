#include<stdio.h>
int main()
{
int day;
printf("enter a number (1-3): ");
scanf("%d",&day);
switch (day){
case 1:
     printf("Sunday\n");
     break;
  case 2:
   printf("Monday\n");
     break;
  case 3:
   printf("Saturday\n");
     break;
     default:
      printf("Invalid day\n");
     break;
     }
     return(0);
     }
