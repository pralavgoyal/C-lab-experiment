//4.	According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include <stdio.h>
int main() {
    int year, days = 0;
    printf("Enter year: ");
    scanf("%d", &year);
    for (int i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            days += 366;
        else
            days += 365;
    }
    int day = days % 7;
    switch(day) {
        case 0: printf("1st January is Monday\n"); break;
        case 1: printf("1st January is Tuesday\n"); break;
        case 2: printf("1st January is Wednesday\n"); break;
        case 3: printf("1st January is Thursday\n"); break;
        case 4: printf("1st January is Friday\n"); break;
        case 5: printf("1st January is Saturday\n"); break;
        case 6: printf("1st January is Sunday\n"); break;
    }
    return 0;
}
