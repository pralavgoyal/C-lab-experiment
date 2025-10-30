//3.	WAP to generate the following set of output.
//a.	
//1
//2 3
//4 5 6

#include <stdio.h>
      int main() {
      int i, num = 1;
      for (i = 1; i <= 3; i++) {
      for (int j = 1; j <= i; j++) {
      printf("%d ", num++);
      }
      printf("\n");
      }
      return 0;
      }
