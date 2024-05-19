//bitwise operator
#include <stdio.h>
int main() {
    int num1,num2;
    printf("\n Enter the 2 numbers: ");
    scanf("%d%d",&num1,&num2);

    // Bitwise AND operator (&)
   int and = num1 & num2;
    printf("Result of num1 & num2: %d\n", and);

    // Bitwise OR operator (|)
    int or = num1 | num2;
    printf("Result of num1 | num2: %d\n", or);

    // Bitwise XOR operator (^)
    int xor = num1 ^ num2;
    printf("Result of num1 ^ num2: %d\n", xor);

    // Bitwise left shift operator (<<)
    int left_shift = num1 << 2;
    printf("Result of num1 << 2: %d\n", left_shift);

    // Bitwise right shift operator (>>)
    int right_shift = num1 >> 2;
    printf("Result of num1 >> 2: %d\n", right_shift);
    return 0;
}

