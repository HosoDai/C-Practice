#include <stdio.h>

void Case1(p)
{
    if (p >= 60)
    {
        printf("合格\n");
    }
    else
    {
        printf("不合格\n");
    }
}

void Case2(p)
{
    if (p >= 80)
    {
        printf("たいへんよくできました\n");
    }
    else if (p >= 60 && p < 80)
    {
        printf("よくできました\n");
    }
    else
    {
        printf("ざんねんでした．\n");
    }
}

void Case3(p)
{
    if (p >= 80)
    {
        printf("優\n");
    }
    else if (p >= 70 && p < 80)
    {
        printf("良\n");
    }
    else if (p >= 60 && p < 70)
    {
        printf("可\n");
    }
    else
    {
        printf("不可\n");
    }
}

int main(void)
{
    int point;

    printf("point = ");
    scanf("%d", &point);

    Case1(point);
    Case2(point);
    Case3(point);

    return 0;
}