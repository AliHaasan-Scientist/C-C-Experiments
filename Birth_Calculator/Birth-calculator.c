#include <stdio.h>
//int Month(int v1,int v2);
int main()
{
/*
this is tiny comples but not deficult
Programer Roy Ali Hasn
IDE: Visual Stdio Code
Compiler:Min-Gw 64-bit 
Program:=this program calcultae your age
Condition:(90% working)

*/
    int m1, m2, d1, d2, y1, y2, mp, dp, yp;
    int shiftd, tm, remday, shifty, totyear, remmonth;
    printf("<<<<You Can Calculate Your Age >>>>");
    printf("\nEnter You Date Of Birth -->Like(Month/Day/Year)\n");
    printf("Day=");
    scanf("%d", &d1);
    printf("Month=");
    scanf("%d", &m1);
    printf("Year=");
    scanf("%d", &y1);
    printf("Date:%d/%d/%d", m1, d1, y1);
    //Current Date
    printf("\n<<<<<<Enter current Date>>>>>>");
    printf("\nDay=");
    scanf("%d", &d2);
    printf("Month=");
    scanf("%d", &m2);
    printf("Year=");
    scanf("%d", &y2);
    printf("Date:%d/%d/%d", m2, d2, y2);
    // Function  calL bY VALUE ATCUAL PARREMETERS
    Month(m1, m2);
    Day(d1, d2);
    Year(y1, y2);
    ///
    // Using Values & Calculate
    mp = Month(m1, m2);
    dp = Day(d1, d2);
    yp = Year(y1, y2);
    //Restriction
    if (mp > 12)
    {
        shifty = mp / 12;
        totyear = shifty + yp;
        remmonth = mp - shifty * 12;
        printf("\nYours Age is|%dyear/%dmonth/%ddays|", totyear, remmonth, dp);
    }
    if (dp >= 31)
    {
        shiftd = dp / 31;
        remday = dp - shiftd * 30;
        tm = shiftd + mp;
        printf("\nYours Age is|%dyear/%dmonth/%ddays|", yp, tm, remday);
    }
    else if (dp < 31)

    {
        printf("\nYours Age is|%dyear/%dmonth/%ddays|", yp, mp, dp);
    }

    getch();
}
//1.Month Function
int Month(int v1, int v2)
{

    int sum;
    sum = (12 - v1) + v2;
    return (sum);
}
//2. Day Calculate Function
int Day(int v1, int v2)
{
    int sum;

    if (v1 > 31)
    {
        printf("You Made a Mistake |Plz Less Than & Equals to 31|");
    }
    else
    {
        sum = (30 - v1) + (30 - v2);
        return (sum);
    }
}

// 3. Years Calculate Function
int Year(int v1, int v2)
{
    if ((v1 > 3000) || (v2 > 3000))
    {
        printf("You Cant Enter %d Plz Enter Less", v1);
        printf("You Cant Enter %d Plz Enter Less", v2);
    }
    else
    {
        int sum;
        sum = v2 - (v1 + 1);
        return sum;
    }
}
