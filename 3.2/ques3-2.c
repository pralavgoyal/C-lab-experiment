//b.	 
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

#include <stdio.h>
int main() {
    int i, j, num;
    for (i = 0; i < 5; i++) {
        num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}