#include <stdio.h>

int main(void)
{
    int num;

    printf("num = ");
    scanf("%d", &num);

    if (num % 2 == 1)
    {
        printf("num = 奇数\n");
    }
    else
    {
        printf("num = 偶数\n");
    }

    return 0;
}