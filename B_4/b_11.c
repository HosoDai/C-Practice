#include <stdio.h>

int main(void)
{
    int month;

    printf("month = ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("元日、成人の日\n");
        break;
    case 2:
        printf("建国記念の日\n");
        break;
    case 3:
        printf("春分の日\n");
        break;
    case 4:
        printf("昭和の日\n");
        break;
    case 5:
        printf("憲法記念日、みどりの日、こどもの日\n");
        break;
    case 7:
        printf("海の日\n");
        break;
    case 9:
        printf("敬老の日、秋分の日\n");
        break;
    case 10:
        printf("体育の日\n");
        break;
    case 11:
        printf("文化の日、勤労感謝の日\n");
        break;
    case 12:
        printf("天皇誕生日\n");
        break;
    default:
        break;
    }
    return 0;
}