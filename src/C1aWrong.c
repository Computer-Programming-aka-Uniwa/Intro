#include <stdio.h>

int main(int argc, int **argv)
{
    int A, B;
    int C, D, E, F; 
    system ("chcp 1253");  // Remove if running on Linux
    printf ("Basic arithmetic operations with Integers\n");
    printf ("========================================\n\n");
    printf ("Enter the first number  : ");
    scanf ("%d", &A); // Error on line 12: Missing ampersand (&) before the variable A
    printf ("Enter the second number : );  // Missing closing quotation mark (") in the printf statement
    scanf ("%d", &B);
    C = A + B;
    D = A - B;
    E = A * B;
    F = A / B;
    printf ("Sum      : %d\n", c); // Error: The variable "c" is used but not declared (should be "C")
    printf ("Difference: %d\n", D);
    printf ("Product  : %d\n", Å); // Error: Greek letter "Å" used instead of Latin "E"
    prantf ("Quotient : %d\n", F); // Error: Incorrect function name "prantf" (should be "printf")
    return 0;;
}
