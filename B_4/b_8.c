#include <stdio.h>

void JudgeFunction(m, p)
{
    int total = m + p;
    if (m >= 60 && p >= 60)
    {
        printf("合格\n");
    }
    else if (total >= 130)
    {
        printf("合格\n");
    }
    else if (total >= 100 && (m >= 90 || p >= 90))
    {
        printf("合格\n");
    }
    else
    {
        printf("不合格\n");
    }
}

int main(void)
{
    int m_p, f_p;

    printf("m_p = ");
    scanf("%d", &m_p);

    printf("f_p = ");
    scanf("%d", &f_p);

    JudgeFunction(m_p, f_p);

    return 0;
}