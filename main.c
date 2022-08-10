#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        if (i % 2 == 0)
        {
            sum += a;
        }
        else
        {
            sum -= a;
        }
    }
    printf("%d",sum);
    return 0;
}
