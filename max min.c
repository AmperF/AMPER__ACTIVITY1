#include<stdio.h>

int main ()
{
 int input, max=0, min=0;

 do {// 1,2,3,4,5,0
    printf("enter number: ");
    scanf("%d", &input); //0
    if (input > max)// 0 > 5
     max = input; // max =5
    if (input < min)
        min= input;

 } while (input !=0);

 printf("\nMax: %d\nMin: %d, max, min");

 return 0;
 }
