#include <stdio.h>

int main(void)
{
    int month;

    printf("month = ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("31日\n");
        break;
    case 2:
        printf("28日\n");
        break;
    case 3:
        printf("31日\n");
        break;
    case 4:
        printf("30日\n");
        break;
    case 5:
        printf("31日\n");
        break;
    case 6:
        printf("30日\n");
        break;
    case 7:
        printf("31日\n");
        break;
    case 8:
        printf("31日\n");
        break;
    case 9:
        printf("30日\n");
        break;
    case 10:
        printf("31日\n");
        break;
    case 11:
        printf("30日\n");
        break;
    case 12:
        printf("31日\n");
        break;

    default:
        printf("入力ミスです(1~12の数字を入力してください)");
        break;
    }
    return 0;
}