// wap in c to find celling and floor value
#include<stdio.h>
int main()
{
    int a;
    int b;
    float c;
    float d;
    printf("enter float value\n");
    scanf("%f",&c);
     a=(int) c;
    printf("%d is in floor value\n",a);
    b=(int)c+1;
    printf("%d is in celling value\n",b);

}