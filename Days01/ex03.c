#include<stdio.h>
int main()
{
    int r;

    printf("entre v : ");
    scanf("%d",&r);
    const float p = 3.14;
    float v = 0;

    v = (4.0f/3.0f) * p * r * r * r;

    printf("%.2f",v);

}