#include<stdio.h>

int main()
{
    int i,n,sqr;
    printf("Enter a number\n");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        sqr = i*i;
        printf("%d\n",sqr);
    }
    
}