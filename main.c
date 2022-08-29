#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\t\t\t\t\t\t\"Leap Year Finder\"\n");
    printf("\t\t\t\t\"This application is made by Md.Hasanuzzaman Himel\"");
    int year;
    printf("\n\nEnter year: ");
    scanf("%d",&year);
    if(year%400 ==0)
    printf("\"%d\" is a leap year", year);
    else if(year%100 == 0)
    printf("\"%d\" is not a leap year", year);
    else if(year%4 == 0)
    printf("\"%d\" is a leap year", year);
    else
    printf("\"%d\" is not a leap year", year);
    getch();
    return 0;
}
