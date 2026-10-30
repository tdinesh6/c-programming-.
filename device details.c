#include<stdio.h>
int main()
{
  char model[20];
float voltage;
float current;
float temperature;
float power;
printf("enter model number:");
scanf("%18s",&model);
printf("enter voltage(V):");
scanf("%f",&voltage);
printf("enter current(A):");
scanf("%f",&current);
printf("enter temperature(C):");
scanf("%f",temperature);
power=voltage*current;
printf("model number:%s\n",model);
printf("voltage:%.2fV\n",voltage);
printf("current:%.2fA\n",current);
printf("temperature:%.2fC\n",temperature);
printf("power:%.2fW\n",power);
return 0;
}
