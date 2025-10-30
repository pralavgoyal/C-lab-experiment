//2.	Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>
int global = 100;
void testScope() {
    int local = 50;  
    printf("Inside testScope:\n");
    printf("Local variable = %d\n", local);
    printf("Global variable = %d\n", global);
}
int main() {
    testScope();
    printf("Outside testScope: global = %d\n", global);
    return 0;
}