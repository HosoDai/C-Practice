#include <stdio.h>

int main(void)
{
    int t_p = 0, g_p = 0;
    int i, t, g;

    for (i = 0; i < 9; i++)
    {
        printf("%d回表、巨人の得点は？", i + 1);
        scanf("%d", &g);
        printf("%d回裏、阪神の得点は？", i + 1);
        scanf("%d", &t);

        g_p += g;
        t_p += t;
    }

    //結果の表示
    printf("巨人：%d点、阪神：%d点\n", g_p, t_p);

    if (g_p > t_p)
    {
        printf("巨人の勝ち\n");
    }
    else if (t_p > g_p)
    {
        printf("阪神の勝ち\n");
    }
    else
    {
        printf("同点\n");
    }

    return 0;
}