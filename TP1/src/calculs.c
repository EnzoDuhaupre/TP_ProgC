#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 3;
    char op = '+';   // Change cette valeur pour tester d'autres opérations

    int resultat_int = 0;   // Pour les résultats entiers ( + - * / % & | )
    int erreur = 0;         // Pour signaler une erreur éventuelle

    switch (op) {
        case '+':
            resultat_int = num1 + num2;
            break;

        case '-':
            resultat_int = num1 - num2;
            break;

        case '*':
            resultat_int = num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                resultat_int = num1 / num2;   // Division entière
            } else {
                printf("Erreur : division par zero !\n");
                erreur = 1;
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat_int = num1 % num2;   // Reste de la division entière
            } else {
                printf("Erreur : modulo par zero !\n");
                erreur = 1;
            }
            break;

        case '&':
            resultat_int = num1 & num2;       // ET binaire
            break;

        case '|':
            resultat_int = num1 | num2;       // OU binaire
            break;

        case '~':
            // Pour ~, on applique le NOT binaire uniquement sur num1
            resultat_int = ~num1;
            break;

        default:
            printf("Operateur inconnu : %c\n", op);
            erreur = 1;
            break;
    }

    if (!erreur) {
        printf("num1 = %d, num2 = %d, op = %c\n", num1, num2, op);
        printf("Resultat = %d\n", resultat_int);
    }

    return 0;
}


