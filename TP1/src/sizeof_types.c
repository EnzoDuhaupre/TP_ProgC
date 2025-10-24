#include <stdio.h>

int main() {
    // Variables de type char
    char signed_char = -100;
    unsigned char unsigned_char = 200;

    // Variables de type short
    short signed_short = -15000;
    unsigned short unsigned_short = 45000;

    // Variables de type int
    int signed_int = -2147483647;
    unsigned int unsigned_int = 4294967295U;

    // Variables de type long int
    long int signed_long_int = -9223372036854775807L;
    unsigned long int unsigned_long_int = 18446744073709551615UL;

    // Variables de type long long int
    long long int signed_long_long_int = -9223372036854775807LL;
    unsigned long long int unsigned_long_long_int = 18446744073709551615ULL;

    // Variables de type float
    float float_var = 3.1415926535f;

    // Variables de type double
    double double_var = 3.141592653589793238;

    // Variables de type long double
    long double long_double_var = 3.141592653589793238462643383279L;

    // Affichage des valeurs des variables de type char
    printf("char (signed): %d\n", signed_char);
    printf("unsigned char: %u\n", unsigned_char);

    // Affichage des valeurs des variables de type short
    printf("short (signed): %d\n", signed_short);
    printf("unsigned short: %u\n", unsigned_short);

    // Affichage des valeurs des variables de type int
    printf("int (signed): %d\n", signed_int);
    printf("unsigned int: %u\n", unsigned_int);

    // Affichage des valeurs des variables de type long int
    printf("long int (signed): %ld\n", signed_long_int);
    printf("unsigned long int: %lu\n", unsigned_long_int);

    // Affichage des valeurs des variables de type long long int
    printf("long long int (signed): %lld\n", signed_long_long_int);
    printf("unsigned long long int: %llu\n", unsigned_long_long_int);

    // Affichage des valeurs des variables de type float
    printf("float: %f\n", float_var);

    // Affichage des valeurs des variables de type double
    printf("double: %lf\n", double_var);

    // Affichage des valeurs des variables de type long double
    printf("long double: %Lf\n", long_double_var);

    return 0;
}

