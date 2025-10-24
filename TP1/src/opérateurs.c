#include <stdio.h>
#include <stdbool.h> 

int main() {
    int a = 16;
    int b = 3;

    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    float division = (float)a / b; 
    int modulo = a % b;

    bool egalite = (a == b);
    bool superieur = (a > b);

    printf("Valeurs initiales : a = %d, b = %d\n\n", a, b);

    printf("Addition de a et b : %d + %d = %d\n", a, b, addition);
    printf("Soustraction de b de a : %d - %d = %d\n", a, b, soustraction);
    printf("Multiplication de a par b : %d * %d = %d\n", a, b, multiplication);
    printf("Division de a par b : %d / %d = %.2f\n", a, b, division);
    printf("Modulo de a par b (reste de la division) : %d %% %d = %d\n\n", a, b, modulo);

    printf("a est-il égal à b ? %s\n", egalite ? "vrai" : "faux");
    printf("a est-il supérieur à b ? %s\n", superieur ? "vrai" : "faux");

    return 0;
}




