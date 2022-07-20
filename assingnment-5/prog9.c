#include<stdio.h>

int main()
{
    int i,n,cub;
    printf("Enter a number\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        cub = i*i*i;
        printf("%d\n",cub);
    }
    
}