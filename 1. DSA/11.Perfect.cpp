#include<stdio.h>

int main()
{
    int i, n, s = 0;

    printf("Enter no: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            s = s + i;
        }
    }

    if(s == n)
    {
        printf("Perfect number: %d\n", n);
    }
    else
    {
        printf("Not perfect number: %d\n", n);
    }

    return 0;
}

