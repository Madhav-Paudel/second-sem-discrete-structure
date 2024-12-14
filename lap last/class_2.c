// wap to calculate the modulo of a%b (remainder)
#include <stdio.h>
int main()
{
 int a;
 int b;

 printf("enter the first number\n");
 scanf("%d",&a);
 printf("enter the second number\n");
 scanf("%d",&b);
  int c=a/b;
 int d=a-c*b;
 
 
 printf("The modulo of %d and %d is %d",a,b,d);

}