#include <stdio.h>

int main(void)
{
    int age;
    printf("age = ");
    scanf("%d", &age);

    int days = age * 365;

    printf("days = %d日\n", days);

    return 0;
}