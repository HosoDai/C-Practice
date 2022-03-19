#include <stdio.h>

void OpenAllDay()
{
    printf("◯\n");
}

void CloseAllDay()
{
    printf("休診\n");
}

int main(void)
{
    int day, time;

    printf("day(0=日曜、1=月曜、2=火曜、3=水曜、4=木曜、5=金曜、6=土曜) = ");
    scanf("%d", &day);

    if (day == 0)
    {
        CloseAllDay();
        return 0;
    }

    if (day == 1)
    {
        OpenAllDay();
        return 0;
    }

    if (day == 4)
    {
        OpenAllDay();
        return 0;
    }

    printf("time(0=午前、1=午後、2=夜間) = ");
    scanf("%d", &time);

    if (day == 2)
    {
        if (time == 0)
        {
            printf("休診\n");
        }
        else
        {
            printf("◯\n");
        }
    }
    if (day == 3)
    {
        if (time == 2)
        {
            printf("休診\n");
        }
        else
        {
            printf("◯\n");
        }
    }
    if (day == 5)
    {
        if (time == 0)
        {
            printf("休診\n");
        }
        else
        {
            printf("◯\n");
        }
    }
    if (day == 6)
    {
        if (time == 0)
        {
            printf("◯\n");
        }
        else
        {
            printf("休診\n");
        }
    }

    return 0;
}