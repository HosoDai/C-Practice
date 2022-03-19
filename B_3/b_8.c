#include <stdio.h>

int main(void)
{
    int x;
    printf("x = ");
    scanf("%d", &x);

    x++;
    printf("x++ = %d\n", x);

    x--;
    printf("x-- = %d\n", x);

    return 0;
}