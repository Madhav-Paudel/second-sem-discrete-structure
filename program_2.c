// wap in c to find the cartesian product of two sets
#include<stdio.h>
int main()
{
    int A[10];
    int B[10];
    
    printf("enter the 5 arrays for A\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&A[i]);

    }
    printf("enter the 5 arrays for B\n");
    for(int i=0;i<5;i++)
     {
        scanf("%d",&B[i]);

    }
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            printf("(%d %d)",A[i],B[j]);
        }
    }
        
}
