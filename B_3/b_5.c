#include <stdio.h>

int main(void)
{
    int x;
    printf("x = ");
    scanf("%d", &x);

    //2倍
    printf("2x = %d\n", x * 2);

    //3倍
    printf("3x = %d\n", x * 3);

    //4倍
    printf("4x = %d\n", x * 4);

    return 0;
}