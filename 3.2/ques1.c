//1.	WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.

#include <stdio.h>
int main() {
    int num, pos = 0, neg = 0, zero = 0;
    char ch;
    do {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num > 0) pos++;
        else if (num < 0) neg++;
        else zero++;
        printf("More numbers? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zeroes: %d\n", zero);
    return 0;
}
