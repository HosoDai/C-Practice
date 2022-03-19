#include <stdio.h>

int main(void)
{
    int num;

    printf("num = ");
    scanf("%d", &num);

    //余り
    int r = num % 2;

    if (num >= 0)
    {
        if (r == 1)
        {
            printf("正の奇数\n");
        }
        else
        {
            printf("正の偶数\n");
        }
    }
    else
    {
        if (r == 0)
        {
            printf("負の偶数\n");
        }
        else
        {
            printf("負の奇数\n");
        }
    }

    return 0;
}