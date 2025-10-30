//1.	WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter first side: ");
    scanf("%d", &a);
    printf("Enter second side: ");
    scanf("%d", &b);
    printf("Enter third side: ");
    scanf("%d", &c);
    if(a+b>c && a+c>b && b+c>a) {
        printf("It is a triangle.\n");
    } else {
        printf("Not a triangle.\n");
    }
    return 0;
}

