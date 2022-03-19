#include <stdio.h>

int main(void)
{
    int x;
    printf("x = ");
    scanf("%d", &x);

    //1乗
    printf("x^1 = %d\n", x);

    //2乗
    printf("x^2 = %d\n", x * x);

    //3乗
    printf("x^3 = %d\n", x * x * x);

    return 0;
}