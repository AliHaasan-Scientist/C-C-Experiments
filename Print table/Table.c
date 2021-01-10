/*
______________This is my practice about comment!_____________
Programer:Roy Ali Hasan
Date:01/07/2021
Program: Print table Any num
Copiler:MinGw-64bit Architecture
My comment:I know this is not a big & intelligent program.But Enough for my satisfaction.
*/
#include <stdio.h>
int main()
{
    int i, num, mul, max; /* Decloration & Initializationn of varible Type:INTEGAR*/
    printf("---------------------__Print Table Any Num You Want__---------------------\n");
    printf("Enter any num and Then Enter Maximumm Table Counting \n");
    printf("Enter a num:");
    scanf("%d", &num); /* Taken an input by user*/
    printf("to\n");
    scanf("%d", &max);
    printf("----start---\n");
    for (i = 1; i <= max; i++) /*there is i COUNTER loop to user maximum entering*/
    {
        mul = num * i;                     /*multiplication of users entered num and couter 12loop variable*/
        printf("%dx%d=%d\n", num, i, mul); /*Display users Entered num x  with couter variable = multiplication result*/
    }
    printf("Done!_Thanks\n");

    printf("Plz Enter ");
    getch();
    return 0;
}
