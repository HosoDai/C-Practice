#include <stdio.h>

int main(void)
{
    int janken;

    printf("janken(1:グー、2:チョキ、3:パー) = ");
    scanf("%d", &janken);

    switch (janken)
    {
    case 1:
        printf("勝ちはパー\n");
        break;
    case 2:
        printf("勝ちはグー\n");
        break;
    case 3:
        printf("勝ちはチョキ\n");
        break;

    default:
        break;
    }

    return 0;
}