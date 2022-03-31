#include <stdio.h>

int main(void)
{
    int num;

    printf("num = ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}