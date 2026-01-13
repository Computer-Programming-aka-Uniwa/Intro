#include <stdio.h>

int main(int argc, int **argv)
{
    int A, B;
    int C, D, E, F; 
    system ("chcp 1253");  // Remove if running on Linux
    printf ("Basic arithmetic operations with Integers\n");
    printf ("========================================\n\n");
    printf ("Enter the first number  : ");
    scanf ("%d",&A); 
    printf ("Enter the second number : "); // Missing closing quotation mark (") at the end of the function's parameter
    scanf ("%d", &B);
    C = A + B;
    D = A - B;
    E = A * B;
    F = A / B;
    printf ("Sum      : %d\n", C); // Variable "c" not declared instead of "C" that is declared
    printf ("Difference: %d\n", D);
    printf ("Product  : %d\n", E); // Greek variable "Å" not declared instead of the Latin "E" that is declared
    printf ("Quotient : %d\n", F); // Function "prantf" not declared instead of "printf" that is declared
    return 0;;
}
