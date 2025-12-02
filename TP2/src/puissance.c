#include <stdio.h>

int main() {
    int a = 2;        
    int b = 3;        
    int resultat = 1; 
    int i;            

    printf("Calcul de %d a la puissance %d :\n", a, b);

    for (i = 1; i <= b; i++) {
        resultat = resultat * a;
    }

    printf("Resultat : %d\n", resultat);

    return 0;
}
