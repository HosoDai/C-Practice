#include <stdio.h>

int main(void)
{
    int i, count, s = 0, b = 0;

    for (i = 0; ((s < 3) && (b < 4)); i++)
    {
        printf("ストライク=1 or ボール=2 → ");
        scanf("%d", &count);

        if (count == 1)
        {
            s++;
        }
        else
        {
            b++;
        }
    }
    printf("%dボール, %dストライク\n", b, s);
    return 0;
}