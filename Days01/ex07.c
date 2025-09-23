#include<stdio.h>
int main()
{
   int a;
   printf("entre a : ");
   scanf("%d",&a);
   int w = a / 20;
   int b = a % 20;
   printf("20 = %d\n",w);
   printf("10 = %d\n",b / 10);
   int z = b % 10;
   printf("5 = %d\n",z / 5);
   int c = z % 5;
   printf("1 = %d\n",c / 1);
}