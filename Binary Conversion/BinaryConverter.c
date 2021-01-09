/*
Date:01/08/2021
time=9:28AM At Night
Programer:Roy Ali Hasan
Program:Convert any Number to decimal
Compiler:MinGw-64bit architecture
IDE: Visual Stdio Code______I Love IT-------Love u  
Use: In This program I use module_%_ Opreator which embeded in arithmatic opreator
Feelings:I did it without any help!!!
I'm Very gald now i some belive on me that i achive my dream(inshallah)
*/
#include <stdio.h>
int main()
{
    int x = 2, num, div1, div2, div3, div4, div5, div6, div7;
    int div8, div9, div10, div11, div12, div13, div14, div15;
    int rem1, rem2, rem3, rem4, rem5, rem6, rem7, rem8;
    int rem9, rem10, rem11, rem12, rem13, rem14, rem15, rem16;
    printf("\t\t\t\t\t---Hello!--- \n");
    printf("<---You Can Convert Any Number Decimal  To Binary Number  System(8bits&16bits Architacture)--->\n");
    printf("Plz Enter a Number:");
    scanf("%d", &num);
    rem1 = num % x;  /* num is variable (type:int) which take iput to user  */
    div1 = num / x;  /* users number divided by x value is 2(becase this binary Conversion)*/
    rem2 = div1 % x; /* Now  -num/x- of valeue assign to -div1- variable  and then use module opreator taking for reminder 
    & vise Versa the other varables like div1,2,3,44,5,6,7 have changed value next tim3 and then program take reminder that particular variable,which i assigned in program
    */
    div2 = div1 / x;
    rem3 = div2 % x;
    div3 = div2 / x;
    rem4 = div3 % x;
    div4 = div3 / x;
    rem5 = div4 % x;
    div5 = div4 / x;
    rem6 = div5 % x;
    div6 = div5 / x;
    rem7 = div6 % x;
    div7 = div6 / x;
    rem8 = div7 % x;
    div8 = div7 / x;
    rem9 = div8 % x;
    div9 = div8 / x;
    rem10 = div9 % x;
    div10 = div9 / x;
    rem11 = div10 % x;
    div11 = div10 / x;
    rem12 = div11 % x;
    div12 = div11 / x;
    rem13 = div12 % x;
    div13 = div12 / x;
    rem14 = div13 % x;
    div14 = div13 / x;
    rem15 = div14 % x;
    div15 = div14 / x;
    rem16 = div15 % x;
    printf("The Binary conversion Of (8-bits Arch) is:'%d%d%d%d%d%d%d%d'", rem8, rem7, rem6, rem5, rem4, rem3, rem2, rem1); /* And there using the 8 format specifier to print the values of variables that we have like (rem1,2,3,4,5,6,7,8) and 
    reverse these values for printing in the sense of binary system representation.*/
    printf("\nThe Binary conversion Of (16-bits Arch) is: '%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d'", rem16, rem15, rem14, rem13, rem12, rem11, rem10, rem9, rem8, rem7, rem6, rem5, rem4, rem3, rem2, rem1);
    printf("\nDone!Thanks A Lot\n");
    printf("Plz Hit Enter Key (',')-By,By--> ");
    getch();
    return 0;
    /*So Finally Program Ends*/
}
