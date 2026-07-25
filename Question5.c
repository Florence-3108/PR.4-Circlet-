#include<stdio.h>
int main()
{
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for(int j = i; j <=5; j++)
        {
            printf(" %d ", j);
        }
        for(int k = 4; k >= i; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}