#include<stdio.h>
int main()
{
int value;
printf("enter sensor value(0-200):");
scanf("%d",&value);

if(value<0|value>200)
  printf("value is not available");

else if(value<=19)
  printf("LOW");

else if(value<=49)
  printf("NORMAL");

else if(value<=89)
  printf("HIGH");

else
  printf("CRITICAL");

return 0;
}
