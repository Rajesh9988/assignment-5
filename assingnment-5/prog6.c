#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter a number:-\n");
    scanf("%d",&n);

    for ( i = 0; i <=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    
}